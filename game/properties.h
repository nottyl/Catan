#pragma once
#define BOARD_SIZE 5
#define TOTAL_TILES 19

typedef enum {
	BRICK,
	LUMBER,
	WOOL,
	GRAIN,
	ORE,
	DESERT
} ResourceType;


typedef struct {
	int x;
	int y;
} Coordinates;

typedef struct {
	ResourceType type;
	int number_token;
} Tile;

typedef struct {
	int resource_cards[6];// Use ResourceType as index
	int development_cards;// To keep it simple, let's just have one type of development card
	int settlements;
	int cities;
	int roads;

} Player;

typedef struct {
	Tile board[19];
	Player players[4];
	int current_turn;
	// ... any other game state variables you need ...
} GameState;

typedef struct {
	Tile tiles[BOARD_SIZE * 2 - 1][BOARD_SIZE * 2 - 1];
} Board;