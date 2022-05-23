#pragma once
#include "animal.h"

class Dog : public Animal {
public:
	virtual void make_sound() const override {
		std::cout << "bark!\n";	
	}
}; 
