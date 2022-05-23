#pragma once
#include "animal.h"

class Cat : public Animal {
public:
	virtual void make_sound() const override {
		std::cout << "meow~\n";	
	}
}; 
