/* 
 * File:   CrazyRandomSword.cpp
 * Author: Rob <rws15@my.fsu.edu>
 *  
 */

#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
	
    int armorIgnore = 0;
	// If armor is less than 2, then the range 0 - armor/2 is always less than 1, and the floor of that is zero
	// Therefore, armoreIgnore = 0 if armor < 2
	if (armor >= 2) 
	{
		// Find the floor of armor / 2
		int halfArmor = (int)(armor / 2);
		// Generate random number from 0 to halfArmor
		// Note: Number % (halfArmor + 1) = halfArmor;
		armorIgnore = rand() % (halfArmor + 1);
	}

	double damage = hitPoints + armorIgnore;
    if(damage < 0){
        return 0;
    }
    return damage;
}