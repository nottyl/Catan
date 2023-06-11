#pragma once
#include "board.h"
#include "player.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void game_init(WINDOW *board, WINDOW *player, WINDOW *progress, GameState *state);
void progress_init(WINDOW *win, GameState *state);
void progress_print(WINDOW *win, GameState *state);
void roll_dice(WINDOW *win, GameState *state);

void game_loop(WINDOW *board, WINDOW *player, WINDOW *progress, GameState *state);
void startTurn(WINDOW *win, GameState *state);
void endTurn(WINDOW *win, GameState *state);
void menu(WINDOW *win, GameState *state);
void buildSettlement(WINDOW *win, GameState *state);
void buildRoad(WINDOW *win, GameState *state);