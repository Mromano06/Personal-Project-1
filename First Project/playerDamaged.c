#include "main.h"
#include <stdio.h>

// Matthew Romano - October 30th, 2024

// When the player takes damage this calculates that

playerDamaged(int playerHealth, int enemyDamage) {

	int newPH = 0, pH = playerHealth, dT = enemyDamage;

	if (pH > 0 && dT >= 0) {		// checks if pH is over 0 and dT isnt a negative value
		newPH = pH - dT;

		if (pH > dT) 				// checks to see if the player has at least 1 health
			return newPH;			// returns the new health if its over 0

		else
			return -1;				// returns -1 if the player has 0 or less health

	}
}