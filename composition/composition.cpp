
#include <iostream>
#include<string>
using namespace std;

#include "Jantung.h"
#include "Manusia.h"

int main()
{
	Manusia* varManusia = new Manusia("jono");
	delete varManusia;
	return 0;  
}

