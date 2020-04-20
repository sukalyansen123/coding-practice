#include <bits/stdc++.h>

using namespace std;

void gameOfLife(vector<vector<int>>& board) {

   for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                int tmp = 0;
            if (i-1 >= 0 && j-1 >= 0) { 
                tmp += (board[i-1][j-1] > 0);
            }
            if (i-1 >= 0) { 
                tmp += (board[i-1][j] > 0);
            }
            if (j-1 >= 0) { 
                tmp += (board[i][j-1] > 0);
            }
            if (i+1 < board.size() && j+1 < board.size()) { 
                tmp += (board[i+1][j+1] > 0);
            }
            if (j+1 < board.size()) { 
                tmp += (board[i][j+1] > 0);
            }
            if (i+1 < board.size() ) { 
                tmp += (board[i+1][j] > 0);
            }
            if (i+1 < board.size() && j-1 >= 0) { 
                tmp += (board[i+1][j-1] > 0);
            }
            if (i-1 >= 0 && j+1 < board.size()) { 
                tmp += (board[i-1][j+1] > 0);
            }

            if (board[i][j] == 0 && tmp==3)
                board[i][j] = -tmp;
            if (board[i][j]== 1) 
                board[i][j] = tmp + 1;
        }
    }

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if(board[i][j] > 0)
                board[i][j] = 1;
            if (board[i][j] < 0)
                board[i][j] = 0;
        }
    }
}
