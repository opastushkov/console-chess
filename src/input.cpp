#include <iostream>
#include <ctype.h>
#include <string>
#include <sstream>
#include <utility>
#include <map>
#include <stdlib.h>

#include "input.h"

#define BOARD_SIZE (8)

using namespace std;


const map<char, int> cellNotation = {
    {'A', 1},
    {'B', 2},
    {'C', 3},
    {'D', 4},
    {'E', 5},
    {'F', 6},
    {'G', 7},
    {'H', 8},
};

int Input::convert(string &stringPos, pair<int, int> &move)
{
    auto letter = toupper(stringPos[0]),
         number = atoi(&stringPos.c_str()[1]);

    if (!cellNotation.count(letter) || !number || number > BOARD_SIZE)
    {
        return -1;
    }

    move = make_pair(cellNotation.at(letter), number);

    return 0;
}

int Input::parseMove(string &input, pair<int, int> &startPos,
        pair<int, int> &endPos)
{
    istringstream ss(input);

    string stringStart,
           stringEnd;

    ss >> stringStart >> stringEnd;

    if (convert(stringStart, startPos)
        || convert(stringEnd, endPos))
    {
        return -1;
    }

    return 0;
}

int Input::getPlayerMove(pair<int, int> &startPos, pair<int, int> &endPos)
{
    string input;
    getline(cin, input);

    if (parseMove(input, startPos, endPos))
    {
        cout << "Input is incorrect!" << endl;
        return -1;
    }

    return 0;
}
