#include "Board.h"
#include <iostream>
#include <cmath>

Board::Board(int size) : _size(size) {
	//INIT MY BOARD:
	for (int x = 0; x < _size; x++) 
	{
		for (int y = 0; y < _size; y++)
		{
			_myBoard.push_back(new Case());
		}
	}
}

void Board::printMyBoard() {

	for (int x = 0; x < _size; ++x)
	{
		for (int i = 0; i < _size*_size; i++) std::cout << "-";
		std::cout << std::endl;
		for (int y = 0; y < _size; ++y)
		{
			std::cout << "| " << _myBoard.at(_size*x+y)->getValue();
		}
		std::cout << " |" << std::endl;
	}

}