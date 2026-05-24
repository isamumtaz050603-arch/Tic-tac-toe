#include <iostream>
using namespace std;

const int SIZE = 3; // Size of the Tic Tac Toe board

void displayBoard(char board[SIZE][SIZE]) {
    cout << "Current Board:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << endl;
        if (i < SIZE - 1) cout << "---------\n";
    }
}

bool makeMove(char board[SIZE][SIZE], int row, int col, char currentPlayer) {
    if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
        cout << "Invalid move! Try again." << endl;
        return false;
    }
    board[row][col] = currentPlayer;
    return true;
}

bool checkWin(char board[SIZE][SIZE], char currentPlayer) {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < SIZE; ++i) {
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
            return true;
        }
    }
    if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
        (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
        return true;
    }
    return false;
}

bool isBoardFull(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

void switchPlayer(char &currentPlayer) {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    char board[SIZE][SIZE] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char currentPlayer = 'X'; // Player X starts first

    while (true) {
        displayBoard(board);
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (makeMove(board, row - 1, col - 1, currentPlayer)) {
            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
            }
            if (isBoardFull(board)) {
                displayBoard(board);
                cout << "It's a draw!" << endl;
                break;
            }
            switchPlayer(currentPlayer);
        }
    }

    return 0;
}
