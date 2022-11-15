//
// Created by hugo on 15/11/2022.
//

#ifndef TD1_BOARD_H
#define TD1_BOARD_H

#include <vector>
#include "Case.h"

class Board {

public:
    //Constructor
        Board(int size = 4);
    //GETTERS & SETTERS
        void printMyBoard();

private:
    std::vector <Case *> _myBoard;
    int _size;
};


//FRIEND FUNCTIONS


#endif //TD1_BOARD_H
