#include<iostream>
#include<vector>
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
 if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '.') {
        winner = board[0][0];
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '.') {
        winner = board[0][2];
        return true;
    }
for (const auto& row : board) 
{
        for (char cell : row)
            {
            if (cell == '.')
            {
                return false; 
            }
        }
    }
winner = '.';
    return true;
}
int main() {
    vector<vector<char>> board(3, vector<char>(3, '.')); 
    bool player1Turn = true;
    char winner;

    while (!gameOver(board, winner))
        { 
        printBoard(board);
        char currentPlayer = (player1Turn) ? 'X' : 'O';









