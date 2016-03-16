#include "TicTacToe.h"
#include <iostream>

using namespace std;

//default constructor
TicTacToe::TicTacToe()
{
	
}

//clears the board and sets all values to 0
void TicTacToe::reset()
{
	int a, b;
	for (a = 1; a < 4; a++)
	{
		for (b = 1; b < 4; b++)
		{
			Board[i][j] = NULL;
		}
	}
}

//determines if the players move is correct or not
bool TicTacToe::move(int row, int col)
{
	if (Board[row][col] == NULL)
	{
		if (row < 4 && row > 0 && col < 4 && col > 0)
		{
			return true;
		}
	}
	else
	{
	  return false;
	}
}



//default destructor
TicTacToe::~TicTacToe()
{
}


int main()
{

}
