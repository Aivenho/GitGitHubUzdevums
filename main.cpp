#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "nauris.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");
	nauris n;
	n.setName("Nauris");
	
	Names[0] = &a;
	Names[1] = &n;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
