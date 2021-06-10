#include "info.h"

void printBitBoard(bitboard_t* bb) {
	bitboard_t shiftBit = 1ULL;
	int sq;

	std::cout << std::endl;
	for (int rank = RANK_8; rank >= RANK_1; rank--) {
		for (int file = FILE_A; file <= FILE_H; file++) {
			sq = 8 * rank + file;

			if ((shiftBit << sq) & *bb) {
				std::cout << "1 ";
			} else {
				std::cout << ". ";
			}
		}
		std::cout << std::endl;
	}
}

void printMove(board_t* b, const move_t move) {

	if (move == NULL_MOVE) {
		cout << "0000" << endl;
		return;
	}

	int promoted = promPiece(b, move);
	char promChar = ' ';

	if (promoted) {
		promChar = 'q';
		if (promoted == Piece::n || promoted == Piece::N) {
			promChar = 'n';
		} else if (promoted == Piece::r || promoted == Piece::R) {
			promChar = 'r';
		} else if (promoted == Piece::b || promoted == Piece::B) {
			promChar = 'b';
		}
	}

	string ret = "";
	ret += ('a' + squareToFile[fromSq(move)]);
	ret += ('1' + squareToRank[fromSq(move)]);
	ret += ('a' + squareToFile[toSq(move)]);
	ret += ('1' + squareToRank[toSq(move)]);

	cout << ret << promChar << endl;
}

string getStringMove(board_t* b, const int move) {
	if (move == NULL_MOVE) {
		return "0000";
	}

	int promoted = promPiece(b, move);
	string promChar = " ";

	if (promoted) {
		promChar = "q ";
		if (promoted == Piece::n || promoted == Piece::N) {
			promChar = "n ";
		} else if (promoted == Piece::r || promoted == Piece::R) {
			promChar = "r ";
		} else if (promoted == Piece::b || promoted == Piece::B) {
			promChar = "b ";
		}
	}

	string ret = "";
	ret += ('a' + squareToFile[fromSq(move)]);
	ret += ('1' + squareToRank[fromSq(move)]);
	ret += ('a' + squareToFile[toSq(move)]);
	ret += ('1' + squareToRank[toSq(move)]);

	ret += promChar;
	return ret;
}

void printMoveStatus(board_t* b, move_t move) {
	cout << "\n#### - Move Status: " << getStringMove(b, move) << endl;
	printBinary(move);
	cout << "From " << fromSq(move) << " to " << toSq(move) << endl;
	cout << "Pawn start " << isPawnStart(move, pieceAt(b, fromSq(move))) << endl;
	cout << "EP capture " << isEnPassant(move) << endl;
	cout << "Castle move " << isCastling(move) << endl;
	cout << "Promoted piece " << promPiece(b, move) << endl;
	cout << "Captured piece " << capPiece(b, move) << endl;
	cout << "####\n" << endl;
}

void printBinary(bitboard_t x) {
	std::bitset<64> b(x);
	cout << b << endl;
}

void printSearchInfo(board_t* b) {
	cout << "\n";
}

void log(string logMsg) {
	ofstream ofs("log.txt", std::ios_base::out | std::ios_base::app);
	ofs << getTime() << "\t" << logMsg << '\n';
	ofs.close();
}

void readInput(search_t* s) {
	int bytes;
	char input[256] = "", * endc;

	if (inputWaiting()) {
		s->stopped = true;
		do {
			bytes = _read(_fileno(stdin), input, 256);
		} while (bytes < 0);
		endc = strchr(input, '\n');
		if (endc)
			*endc = 0;

		if (strlen(input) > 0) {
			if (!strncmp(input, "quit", 4)) {
				cout << "READ INPUT: quit" << endl;
				s->quit = true;
			}
		}
		return;
	}
}

void printUCI(search_t* s, int d, int selDpt, int score) {
	string scoreStr = " score ";

	if (abs(score) >= ISMATE) {
		string sign = (score > 0) ? "" : "-";
		scoreStr += "mate " + sign + to_string(MATE_VALUE - abs(score));
	} else {
		scoreStr += "cp " + to_string(score);
	}

	cout << "info depth " << d
		<< " seldepth " << selDpt
		<< scoreStr
		<< " nodes " << (s->nodes + s->qnodes)
		<< " time " << (getTimeMs() - s->startTime);
}

void printPV(board_t* b, move_t* moves, int len) {
	cout << " pv ";

	for (int i = 0; i < len; i++) {
		cout << getStringMove(b, moves[i]);
	}

	//#define STRUCT_PV
	//#ifdef STRUCT_PV
	//	for (int i = 0; i < pvLine->len; i++) {
	//		cout << getStringMove(pvLine->line[i]);
	//	}
	//#else
	//	for (int i = 0; i < pvMoves; i++) {
	//		cout << getStringMove(b->pvArray[i]);
	//	}
	//#endif // STRUCT_PV
}

void printTTablePV(board_t* b, int depth, int selDepth) {
	int cnt = 0;
	cout << " pv ";

	for (int i = 0; i <= depth; i++) {
		move_t pvMove = probePV(b);

		if (pvMove != NO_MOVE && isLegal(b, pvMove)) {
			cout << getStringMove(b, pvMove);
			push(b, pvMove);
			cnt++;
		} else {
			// Ttable entry was overwritten or no further entries
			break;
		}
	}

	while (cnt--) pop(b);

}

void printPvLine(board_t* b, move_t* pvLine, int d, int score) {
	int pvLen = d;
	if (score >= ISMATE)
		d = MATE_VALUE - score;

	cout << " pv ";
	for (int i = 0; i < d; i++) {
		cout << getStringMove(b, pvLine[i]);
	}
}

string getTime() {
	char str[32]{};
	time_t a = time(nullptr);
	struct tm time_info;

	if (localtime_s(&time_info, &a) == 0) strftime(str, sizeof(str), "%H:%M:%S", &time_info);
	return str;
}

bool inputWaiting() {
	static int init = 0, pipe;
	static HANDLE inh;
	DWORD dw;

	if (!init) {
		init = 1;
		inh = GetStdHandle(STD_INPUT_HANDLE);
		pipe = !GetConsoleMode(inh, &dw);
		if (!pipe) {
			SetConsoleMode(inh, dw & ~(ENABLE_MOUSE_INPUT | ENABLE_WINDOW_INPUT));
			FlushConsoleInputBuffer(inh);
		}
	}
	if (pipe) {
		if (!PeekNamedPipe(inh, NULL, 0, NULL, &dw, NULL))
			return 1;
		return dw;
	} else {
		GetNumberOfConsoleInputEvents(inh, &dw);
		return dw <= 1 ? 0 : dw;

	}
}