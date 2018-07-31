#include "header.h"

int main()
{
	srand((unsigned int)time(NULL));
	board_setting();
	board_print();
	return 0;
}

void board_setting()
{
	for (int i = 0; i < 22; i++) {
		board[i][0] = "бс";
		board[i][11] = "бс";
	}
	for (int i = 1; i < 11; i++) {
		board[0][i] = "бс";
		board[21][i] = "бс";
	}
	for (int i = 1; i < 21; i++) {
		for (int j = 1; j < 11; j++) {
			board[i][j] = "  ";
		}
	}
}

void board_print()
{
	for (int i = 0; i < 22; i++) {
		for (int j = 0; j < 12; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
}

void block_move()
{
	int block_switch = 0;
	int direc;
	int block_num = rand()%7;
	if (kbhit()) {
		direc = getch();
		switch(direc) {
			case 'w':
				break;
			case 'a':
				break;
			case 's':
				break;
			case 'd':
				break;
			default:
		}
	}
}