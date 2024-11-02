#include "playerFunctions.h"
#include <stdio.h>

// Matthew Romano - November 1st, 2024

// when player heals this calculates what to return

int playerHealed(int playerHealth, int healNum) {

	int newPH = 0, pH = playerHealth, h = healNum;
	
	if (pH > 0 && h >= 0) {		// checks if pH is over 0 and h isnt a negative value
		newPH = pH + h;
		return newPH;			// returns the new health
	}

	else
		return -1;				// returns -1 if the player has 0 or less health

}