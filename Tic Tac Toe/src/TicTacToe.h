#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


bool inlimit(int since, int until, int input);

class TicTacToe {

private:
	int board_width;
	int board_area;
	int round;
	int last_answer;
	int currentrow;
	int currentcolumn;
	std::vector<std::vector<int>> tile_display;
	std::vector<std::vector<char>> tile_raw;
	bool hide;
	bool end;
	std::string winner;
	std::string player1_name;
	std::string player2_name;
	

public:
	TicTacToe(int board_size);
	~TicTacToe();
	
	void setPlayer1_name(std::string name);
	void setPlayer2_name(std::string name);
	
	void start();
	void run();
	void drawboard();
	void checkwin();
	void summary();


};
