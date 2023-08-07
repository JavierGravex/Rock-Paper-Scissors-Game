#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


#define ROCK 1
#define PAPER 2
#define SCISSORS 3

void game_2(); 

using namespace std;

int main() {

	int player_cho = 0 ;

	srand((unsigned int) time(NULL));
	
	game_2 ();
	
	
	return 0;

}


void game_2()
{
	int player_throw = 0;
	bool player_cho = false;
	int ai_throw = 0;
	bool game = false;
	
	
	do
	{
		cout << setw(20) << "Select your throw."  << endl;
		cout <<  endl << "1: ROCK" << endl;
		cout << "2: PAPER" << endl;
		cout << "3: SCISSORS" << endl;
		cout << "4: Exit Game." << endl;
		cout << "Selection:" << endl;
		cin >> player_throw;

		ai_throw = (rand() % 3) + 1;
		switch (player_throw)
		 
		{
	

		default:

			cout << "Your selection must be between 1 and 4!" << endl;  

		case 1:

			if (ai_throw == ROCK)
			{
				cout << "AI throws ROCK. " << endl;
			}
			else if (ai_throw == PAPER)
			{
				cout << "AI throws PAPER. " << endl;
			}
			else if (ai_throw == SCISSORS)
			{
				cout << "AI throws SCISSORS" << endl;
			}

			
			if (player_throw == ai_throw)
			{
				cout << "Draw!! Play again!" << endl;
			}


			if (player_throw == ROCK && ai_throw == SCISSORS)
			{
				cout << "ROCK beats SCISSORS! YOU WIN!!. " << endl;
			}

			else if (player_throw == ROCK && ai_throw == PAPER)
			{
				cout << "PAPER beats ROCK! YOU LOSE!!. " << endl;
			}

			break;


		case 2:

			if (ai_throw == ROCK)
			{
				cout << "AI throws ROCK. " << endl;
			}
			else if (ai_throw == PAPER)
			{
				cout << "AI throws PAPER. " << endl;
			}
			else if (ai_throw == SCISSORS)
			{
				cout << "AI throws SCISSORS" << endl;
			}

			
			if (player_throw == ai_throw)
			{
				cout << "Draw!! Play again!" << endl;
			}

			if (player_throw == PAPER && ai_throw == ROCK)
			{
				cout << "PAPER beats ROCk! YOU WIN!!. " << endl;
			}

			else if (player_throw == PAPER && ai_throw == SCISSORS)
			{
				cout << "SCISSORS beats PAPER!, YOU LOSE!!. " << endl;
			}

			break; 

		case 3:

			if (ai_throw == ROCK)
			{
				cout << "AI throws ROCK. " << endl;
			}
			else if (ai_throw == PAPER)
			{
				cout << "AI throws PAPER. " << endl;
			}
			else if (ai_throw == SCISSORS)
			{
				cout << "AI throws SCISSORS" << endl;
			}

		
			if (player_throw == ai_throw)
			{
				cout << "Draw!! Play again!" << endl;
			}

			if (player_throw == SCISSORS && ai_throw == PAPER)
			{
				cout << "SCISSORS beats Paper!, YOU WIN!! " << endl;
			}

			else if (player_throw == SCISSORS && ai_throw == ROCK)
			{
				cout << "ROCK beats SCISSORS!, YOU LOSE!! " << endl;
			}


			break;

		case 4:

		cout << "BYEBYE SEE YOU LATER SPACE-COWBOY! " << endl;
	    exit(0);
		break;

		}
		
	} while (0);


	cout << endl << "Do you want to play again ? " << endl;
	cout << " 1 for Yes! || 2 for NO!" << endl;
	cin >> player_cho;

	switch (player_cho) {

	case 1:

		game_2();


	case 2:

		cout << "Bye bybe " << endl;
		exit(0);
		break;

	}
	

}