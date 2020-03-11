#pragma once

#include <vector>

#include "chessman.h"

using namespace std;


class Board {
    private:
        vector<vector<wchar_t> > mChessBoard;

        Board();
        virtual ~Board();

    public:
        static Board* getInstance()
        {
            static Board instance;

            return &instance;
        }

        void show();
};
