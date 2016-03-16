#include "TicTacToe.h"
#include <iostream>

using namespace std;

//default constructor
TicTacToe::TicTacToe()
{
	
}

//clearing the board and sets all values to 0
void TicTacToe::reset()
{
	int a, b;
	for (a = 1; a < 4; a++)
	{
		for (b = 1; b < 4; b++)
		{
			Game[a][b] = NULL;
		}
	}
}

//determining if the players move is correct or not
bool TicTacToe::move(int row, int col)
{
	if (Game[row][col] == NULL)
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

//displaying the game board and players moves
void TicTacToe::print(){
	int a, b;
	for (a = 1; a < 4; a++){
		for (b = 1; b < 4; b++){
			if (Game[a][b] == NULL)
				cout << "-";
			else
				cout << Game[a][b] << "  ";
		}
		cout << endl;
	}
}




//default destructor
TicTacToe::~TicTacToe()
{
}


int main()
{

}
