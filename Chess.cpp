#include <iostream>

using namespace std;
class knight
{

};

class rook
{

};

class queen
{

};

class king
{

};

void printBoard(int row[8])
{
    for (int i = 0; i < 8; i++)
    {
        cout << row[i] << "  ";
    }
}

int game_board()
{
    int row1[8] = {0, 0, 0, 0, 0, 0, 0, 0 };
    int row2[8] = {0, 0, 0, 0, 0, 0, 0, 0 };
    int row3[8] = {0, 0, 0, 0, 0, 0, 0, 0 };
    int row4[8] = {0, 0, 0, 0, 0, 0, 0, 0 };
    int row5[8] = {0, 0, 0, 0, 0, 0, 0, 0 };
    int row6[8] = {0, 0, 0, 0, 0, 0, 0, 0 };
    int row7[8] = {0, 0, 0, 0, 0, 0, 0, 0 };
    int row8[8] = {0, 0, 0, 0, 0, 0, 0, 0 };

    printBoard(row1);
    cout << "\n";
    printBoard(row2);
    cout << "\n";
    printBoard(row3);
    cout << "\n";
    printBoard(row4);
    cout << "\n";
    printBoard(row5);
    cout << "\n";
    printBoard(row6);
    cout << "\n";
    printBoard(row7);
    cout << "\n";
    printBoard(row8);
    cout << "\n";

    return 0;
}

void game()
{
    int turn = 1;
    bool gameOver = false;
    bool turnDone = false;
    bool whiteTurn = true;
    string move;

    cout << "Game start, its whites turn\n";

    while (gameOver == false)
    {
        if (turnDone == true)
        {
            turnDone = false;
            turn++;
        }
        if (whiteTurn == true)
        {
            cout << "Its whites turn\n", "Type your move: ";
            cin >> move;

        }
        else
        {
            cout << "Its blacks turn\n", "Type your move : "; 
            cin >> move;
        }
    }
    cout << "Game is over!\n", "Game lasted for: ", turn, " turns\n";
}

int main()
{
    //cout << "To type your moves first type the coordinate of piece you want to move and then coordinate where to move. For example A1A5";
    //game();
    game_board();
}
