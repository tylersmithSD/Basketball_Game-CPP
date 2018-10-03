/* Tyler Nathan Smith */

// We need to include our reference to our Header file here.
#include "Player.h"
#include <iostream>
#include <cstring>

// '::' is the scope resolution operator
// This tells the compiler what "scope" or namespace we are in.
// Same reason behind the need to use the 'std::'

// Default Constructor
Player::Player()
{
}

// Destructor		
Player::~Player()
{
}	

// Get Score Method		
char* Player::getScore() 
{
	return score;
} 

// Set Score Method		
void Player::setScore(char *newScore) 
{
	strcpy(this->score, newScore);
} 