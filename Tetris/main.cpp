#include <iostream>
#include <string>
using namespace std;

string board[22][12];
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
		board[i][0] = "бр";
		board[i][11] = "бр";
	}
	for (int i = 1; i < 11; i++) {
		board[0][i] = "бр";
		board[21][i] = "бр";
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