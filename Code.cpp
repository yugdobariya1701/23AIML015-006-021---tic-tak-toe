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

int main(){
}
