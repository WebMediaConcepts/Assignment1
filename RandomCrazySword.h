/* 
 * File:   RandomCrazySword.h
 * Author: Rob <rws15@my.fsu.edu>
 * 
 */

#include <string>
#include "Weapon.h"

#ifndef RANDOMCRAZYSWORD_H
#define RANDOMCRAZYSWORD_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class RandomCrazySword : public Weapon {
public:

    RandomCrazySword() : Weapon("Crazy Random Sword", 70.0) {
    }
    virtual ~RandomCrazySword() {}; 
    virtual double hit(double armor);

};

#endif /* RANDOMCRAZYSWORD_H */

