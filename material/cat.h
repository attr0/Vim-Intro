// task2: copy this file to dog.h
// task3: make dog.h work

#pragma once
#include "animal.h"

class Cat : public Animal {
public:
	virtual void make_sound() const override {
		std::cout << "meow~\n";	
	}
}; 
