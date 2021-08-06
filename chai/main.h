#pragma once

#include "perft.h"
#include "uci.h"
#include "search.h"


#ifdef ASSERT
static std::string info_ASSERT = "1";
#else
static std::string info_ASSERT = "0";
#endif // ASSERT

#if defined(_MSC_VER)
static std::string info_COMPILER = "MSVC";
#elif defined(__GNUC__)
static std::string info_COMPILER = "GCC";
#endif


// static board_t board;
// static board_t* b = &board;

static Perft perft;
static moveList_t move_s[1];
static search_t s[1];

/**
 * Main function to run chai in console.
 *
 * @returns Exit-code for the process - 0 for success, else an error code.
 */
int main();

/**
 * Start a game in console.
 */
void cli();

/**
 * Function to divide with cmd-line move after each perft.
 *
 * @param  b	 board_t reference.
 * @param  fen   The fen.
 * @param  depth The initial depth.
 */
void dividePerft(board_t* b, int depth);

