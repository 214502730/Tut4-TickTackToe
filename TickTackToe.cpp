#include "TickTackToe.h"
#include <iostream>

using namespace std;

//default constructor
TickTackToe::TicTackoe()
{
	
}

//clearing the board and sets all values to 0
void TickTackToe::reset()
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
bool TickTackToe::move(int row, int col)
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
void TickTackToe::print()
{
	int a, b;
	for (a = 1; a < 4; a++)
	{
		for (b = 1; b < 4; b++)
		{
			if (Game[a][b] == NULL)
				cout << "-";
			else
				cout << Game[a][b] << "  ";
		}
		cout << endl;
	}
}

//determines the winner of the game or if it is still in progress
int TickTackToe::over()
{
	int a, b;
	char win = NULL;
	for (a = 1; a < 4; a++)
	{
		if (Game[a][0] == Game[a][1] == Game[a][0] == Game[a][2])
		{
			win = Game[a][0];
		}

		if (Game[0][a] == Game[1][a] == Game[0][a] == Game[2][a])
		{
			if (Game[0][a] != NULL)
				win = Game[0][a];
		}
	}

	if (win == "O")
	{
		return 1;
	}
	else if (win == "x")
	{
		return 2;
	}


	//determining if there is an empty field in the grid 
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
		{
			if (Game(a, b)==NULL)
				return 3;
		}
	}
	
}





//default destructor
TickTackToe::~TickTackToe()
{
}


int main()
{

	TickTackToe obj;
	bool finished = false; // determines if the game is complete
	int row, col;
	int Play = 1; //keeps track of which players turn it is 
	while (!finished) 
	{
		cout << "Player " << Play << " please enter the row" << endl;
		cin >> row;
		cout << " please enter column" << endl;
		cin>> col;

		//determining if move is valid
		if (obj.move(row, col)) 
		{
			if (Play == 1) 
			{
				Game[row][col] = '0';
				Play = 2;	
			}
			else 
			{
				Game[row][col] = 'X';
				Play = 1;
			}
		}
		else 
		{
			cout << "invalid move please try again"<< endl;
		}

		//displaying the game board
		cout << "Game board:" << endl;
		obj.print(); 

		//determining if there is a winner or the game is still in progress
		int decision = obj.over();
		if (decision == 1) {
			cout << "the winner is player 1" << endl;
			obj.reset();
		}
		else if (decision == 2)
		{
			cout << "the winner is player 2" << endl;
			obj.reset();
		}

		else if (decision == 3 )
		{
			cout << "the game is not finished yet" << endl;
		}
	}

	return 0;
}
