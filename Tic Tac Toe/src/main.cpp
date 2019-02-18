#include <iostream>
#include <string>
#include "TicTacToe.h"
#include "board.h"

#define LOG(x) std::cout << x; // For Debugging only

int main() {

	system("title Tic Tac Toe by Omsin");
	system("mode 200");
	for (int i = 0; i < 200; i++)
		std::cout << "-";
	std::cout << "Copyright (c) 2019 Krissada Singhakachain.  All rights reserved." << std::endl << std::endl;
	std::cout << "source code is available at https://omsinkrissada.github.io/Tic-Tac-Toe-Game/" << std::endl;
	for (int i = 0; i < 200; i++)
		std::cout << "-";
	std::cout << std::endl;

	std::cout << "Welcome to Tic-Tac-Toe Game(aka O-X Game) by Omsin" << std::endl << std::endl;

	int board_width;
	std::cout << "Please enter board width >> ";
	std::cin >> board_width;

	TicTacToe game(board_width);
	
	game.start();
	game.run();
	game.summary();


	/*while (!checkwin) {
		char input;
		system("cls");
		DrawBoard();

		std::cin.get(input);
		int answer = input - '0';




		checkwin();
	}*/

	std::cout << std::endl << std::endl;
	system("pause");
	return 0;
}
