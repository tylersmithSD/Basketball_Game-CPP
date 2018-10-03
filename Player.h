/* Tyler Nathan Smith */

// Header Guard
#ifndef PLAYER_H
#define PLAYER_H


// Header File for Player class. 
class Player
{
    // Private member variables.
    private:
        char score[5];
     
	// Public Constructors/Destructors/Member Method(s)
    public:
		// Constructors
        Player();
        
		// Destructor
        ~Player();
        
		// Member Method(s)
        char* getScore();
        void setScore(char* newScore);
};

#endif
