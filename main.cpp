#include <iostream>
#include "Case.h"
#include "Board.h"

int main() {

int size;
    std::cin >> size;

    Board board(size);

    board.printMyBoard();

    return 0;
}