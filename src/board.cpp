#include <iostream>

#include "board.h"


Board::Board()
{
    mChessBoard = {
    {B_ROOK, B_KNIGHT, B_BISHOP, B_QUEEN, B_KNIGHT, B_BISHOP, B_KNIGHT, B_ROOK},
    {B_PAWN, B_PAWN, B_PAWN, B_PAWN, B_PAWN, B_PAWN, B_PAWN, B_PAWN},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {W_PAWN, W_PAWN, W_PAWN, W_PAWN, W_PAWN, W_PAWN, W_PAWN, W_PAWN},
    {W_ROOK, W_KNIGHT, W_BISHOP, W_QUEEN, W_KNIGHT, W_BISHOP, W_KNIGHT, W_ROOK},
    };
}

Board::~Board() { }

void Board::show()
{
    for (const auto &line: mChessBoard)
    {
        for (const auto &cell: line)
        {
            wcout << cell << " ";
        }
        wcout << endl;
    }
}
