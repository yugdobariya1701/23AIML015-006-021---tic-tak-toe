#include<iostream>
using namespace std;
void printBoard(const vector<vector<char>>& board)
{
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}
bool gameOver(const vector<vector<char>>& board, char& winner)
{
    for (int i = 0; i < 3; ++i) 
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '.') {
            winner = board[i][0];
            return true;
        }
    }
 for (int j = 0; j < 3; ++j)
     {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != '.')
        {
            winner = board[0][j];
            return true;
        }
    }



int main(){
}
