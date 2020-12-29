#pragma once

#include <algorithm>
#include <iostream>
#include <bitset>
#include <string>
#include <chrono>
#include <iostream>

#include "board.h"
#include "defs.h"
#include "moveGenerator.h"
#include "legalMoveGenerator.h"
#include "perft.h"
#include "uci.h"
#include "search.h"


static Board board;

static Perft perft;

static moveList_t move_s[1];

static search_t s[1];


/// <summary>
/// Main function to run chess in console.
/// </summary>
int main();

/// <summary>
/// Start a game in console.
/// </summary>
/// <param name="b">Board instance</param>
/// <param name="moveGenerator">MoveGenrator instance</param>
void play(Board* b, Perft* p, search_t* s);

void dividePerft(Board* b, string fen, int depth);

