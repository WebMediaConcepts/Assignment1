/* 
 * File:   RandomCrazySword.cpp
 * Author: Rob <rws15@my.fsu.edu>
 *  
 */

#include "RandomCrazySword.h"


double RandomCrazySword::hit(double armor){
	
	//Ignores 50% of armor
	double damage = hitPoints - (armor * 0.5);
    if(damage < 0){
        return 0;
    }
    return damage;
}