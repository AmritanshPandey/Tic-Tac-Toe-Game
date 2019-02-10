// Tic_Tac_Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin ();
void board ();

int main()
{
	int player = 1, i, choice;

	char mark;
	do {
		board();
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number: ";
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';
	}
}

int checkwin()
{
	return 0;
}

void board()
{
}
