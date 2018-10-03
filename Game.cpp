/* Tyler Nathan Smith */
	
// Reference to libraries and header file
#include "Player.h"
#include <iostream>
#include <stdlib.h> 
#include <ctime>

// Main Method - Runs the program.
int main()
{
	bool contGame = true;
	bool endGame = false;
	int  count = 0; 
	char reset[5] = "";
	char *curScore;
	
	srand((int)time(0)); //Seed for random number
		
    // Creates two new players instance on the Heap.
    Player * myPlayer1 = new Player();
    Player * myPlayer2 = new Player();
	
	//Loop through the game until a player gets horse
	while( contGame == true )
    {
		count++;
		char newScore[5] = "    ";
		if (count == 1)
		{
			//Reset player scores
			endGame = false;
			(*myPlayer1).setScore(reset);
			(*myPlayer2).setScore(reset);
		}
		
		int shot1 = rand()%2;	
		int shot2 = rand()%2;	
			
		//Shooting results from players
		if (shot1 == 1 && shot2 == 0)
		{
			//Player 2 gets the letter
			std::cout << "Player #1: Hit Shot!" << std::endl;
			std::cout << "Player #2: Missed Shot!" << std::endl;
			
			//Logic to figure out what letter player should get
			curScore = (*myPlayer2).getScore();
			if(curScore[0] != 'H')
			{
				std::cout << "        Player #2: Added an 'H'" << std::endl;
				newScore[0] = 'H';
				(*myPlayer2).setScore(newScore);
			}
			else if(curScore[1] != 'O')
			{
				std::cout << "        Player #2: Added an 'O'" << std::endl;
				newScore[0] = 'H';
				newScore[1] = 'O';
				(*myPlayer2).setScore(newScore);
			}
			else if(curScore[2] != 'R')
			{
				std::cout << "        Player #2: Added an 'R'" << std::endl;
				newScore[0] = 'H';
				newScore[1] = 'O';
				newScore[2] = 'R';
				(*myPlayer2).setScore(newScore);
			}
			else if(curScore[3] != 'S')
			{
				std::cout << "        Player #2: Added an 'S'" << std::endl;
				newScore[0] = 'H';
				newScore[1] = 'O';
				newScore[2] = 'R';
				newScore[3] = 'S';
				(*myPlayer2).setScore(newScore);
			}
			else if(curScore[4] != 'E')
			{
				std::cout << "        Player #2: Added an 'E'" << std::endl;
				std::cout << std::endl;
				std::cout << "Player 1 Wins :: Player 2 = HORSE" << std::endl;
				std::cout << std::endl;
				endGame = true;
			}
		}
		else if (shot1 == 0 && shot2 == 1)
		{
			//Player 1 gets the letter
			std::cout << "Player #1: Missed Shot!" << std::endl;
			std::cout << "Player #2: Hit Shot!" << std::endl;
			
			//Logic to figure out what letter player should get
			curScore = (*myPlayer1).getScore();
			if(curScore[0] != 'H')
			{
				std::cout << "        Player #1: Added an 'H'" << std::endl;
				newScore[0] = 'H';
				(*myPlayer1).setScore(newScore);
			}
			else if(curScore[1] != 'O')
			{
				std::cout << "        Player #1: Added an 'O'" << std::endl;
				newScore[0] = 'H';
				newScore[1] = 'O';
				(*myPlayer1).setScore(newScore);
			}
			else if(curScore[2] != 'R')
			{
				std::cout << "        Player #1: Added an 'R'" << std::endl;
				newScore[0] = 'H';
				newScore[1] = 'O';
				newScore[2] = 'R';
				(*myPlayer1).setScore(newScore);
			}
			else if(curScore[3] != 'S')
			{
				std::cout << "        Player #1: Added an 'S'" << std::endl;
				newScore[0] = 'H';
				newScore[1] = 'O';
				newScore[2] = 'R';
				newScore[3] = 'S';
				(*myPlayer1).setScore(newScore);
			}
			else if(curScore[4] != 'E')
			{
				std::cout << "        Player #1: Added an 'E'" << std::endl;
				std::cout << std::endl;
				std::cout << "Player 2 Wins :: Player 1 = HORSE" << std::endl;
				std::cout << std::endl;
				endGame = true;
			}
		}
		else if (shot1 == 1 && shot2 == 1)
		{
			//Both players made the shot
			std::cout << "Player #1: Hit Shot!" << std::endl;
			std::cout << "Player #2: Hit Shot!" << std::endl;
		}
		else if (shot1 == 0 && shot2 == 0)
		{
			//Both players missed the shot
			std::cout << "Player #1: Missed Shot!" << std::endl;
			std::cout << "Player #2: Missed Shot!" << std::endl;
		}
		
		if (endGame == true)
	    {
			//Pose question and react
			char userInput[3];
			std::cout << "Would you like to play again (Y|N)? :" << std::endl;
			std::cin >> userInput;
				
			if (userInput[0] == 'N' || userInput[0] == 'n')
			{
				contGame = false; //End Game
			}
			else
			{
				count = 0;
			}
		}	
	} //End Loop
    
    
	// C++ Memory Management - calls the Rectangle destructor.
	delete myPlayer1;
	delete myPlayer2;
	
    return 0;
} 
