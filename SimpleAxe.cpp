/* 
 * File:   SimpleAxe.cpp
 * Author: Rob <rws15@my.fsu.edu>
 *  
 */

#include "SimpleAxe.h"


double SimpleAxe::hit(double armor){
	double damage = 0.0;
	if(armor < 20)
	{
		damage = hitPoints;	//If armor is greater than 0 and less than 20, the axe will ignore all the armor points.
	}
	else 
	{
		damage = hitPoints - armor;
	}
    
    if(damage < 0){
        return 0;
    }
    return damage;
}