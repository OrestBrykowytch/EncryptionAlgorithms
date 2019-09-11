#pragma once

#include <iostream>
#include <string>

using namespace std;

class XOR
{
private:
	// Variables
	string xMsg;
	string xEMsg;
	string xDMsg;
	char xorKey;

	// Functions
	string encryptDecrypt(string xMsg, char xorKey);

public:
	// Constructors
	XOR();

	// Destructor
	~XOR();

	// Accessors

	// Modifiers

	// Functions
	int xorCipher();
};

