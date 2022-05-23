#include <vector>

#include "animal.h"
#include "cat.h"
#include "dog.h"

int main()
{
	// create object
	std::vector<Animal*> zoo;

	for(size_t i = 0; i < 4; ++i)
		zoo.push_back(new Cat()), 
		zoo.push_back(new Dog());

	// sounds from all animals in my zoo
	for(auto ptr : zoo) if(ptr) ptr->make_sound();

	// delete object
 	for(auto ptr : zoo) if(ptr) delete ptr;
	
	return 0;
}
