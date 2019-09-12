#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Ceasar
{
private:
	// Vars
	int i, x, case1answer, case2answer;

	string str, filename, line;

	ofstream output;
	ifstream input;

	// Functions
public:
	// Constructors
	Ceasar();

	// Destructors
	~Ceasar();

	// Accessors

	// Modifiers

	// Functions
	int ceasarCipher();
};

