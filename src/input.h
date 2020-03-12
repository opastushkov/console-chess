#pragma once

#include <string>

using namespace std;


class Input {
    private:
        int parseMove(string&, pair<int, int>&, pair<int, int>&);
        int convert(string&, pair<int, int>&);

    public:
       int getPlayerMove(pair<int, int>&, pair<int, int>&);
};
