#include <iostream>

#include "board.h"


int main()
{
    std::setlocale(LC_ALL, "en_US.UTF-8");

    Board *board = Board::getInstance();

    board->show();
}
