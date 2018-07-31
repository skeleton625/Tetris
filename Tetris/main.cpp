#include <iostream>
#include <string>
using namespace std;

static string board[22][12];
const int block[7][4][2] = {
	{ {1,5}, {2,5}, {3,5}, {4,5} },
	{ {1,5}, {2,5}, {3,5}, {3,6} },
	{ {1,6}, {2,6}, {3,6}, {3,5} },
	{ {1,5}, {2,5}, {2,6}, {3,6} },
	{ {1,6}, {2,6}, {2,5}, {3,6} },
	{ {1,5}, {1,6}, {2,5}, {2,6} },
	{ {1,6}, {2,6}, {1,5}, {2,7} } };
const int BT[7][6][2] = {
	{ {1,1}, {-1,-1}, {-2,-2}, {-1,-1}, {1,1},{2,2} },
	{ {1,1}, {-1,-1}, {0,-2}, {1,-1}, {-1,1}, {-2,0} },
	{ {1,1}, {-1,-1}, {-2,0}, {1,-1}, {-1,1}, {0,2} },
	{ {1,1}, {-1,1}, {-2,0}, {-1,-1}, {1,-1}, {2,0} },
	{ {1,-1}, {-1,-1}, {-2,0}, {-1,1}, {1,1}, {2,0} },
	{ {1,1}, {-1,1}, {1,-1}, {1,-1}, {1,1}, {-1,-1} }
};
void board_setting();
void board_print();

int main()
{
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