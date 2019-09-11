#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

using namespace std;

class RSA
{
private:
	// Vars
	long int e[50], d[50], temp[50], x, y, n, t, i, flag;
	double j;
	char en[50], m[50];
	string msg;

	// Functions
	int prime(long int pr);
	void encryption_key();
	long int cd(long int a);
	void encrypt();
	void decrypt();

public:
	// Constructors
	RSA();

	// Destructor
	~RSA();

	// Accessors

	// Modifiers

	// Functions
	int rsaCipher();
};

