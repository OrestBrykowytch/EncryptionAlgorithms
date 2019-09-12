#include "Ceasar.h"
#include "RSA.h"
#include "XOR.h"

int choice;


int main()
{
	RSA rsaObj;
	Ceasar ceasarObj;
	XOR xorObj;

	std::cout << "1: RSA Cipher" << std::endl;
	std::cout << "2: Ceasar Cipher (Can do file saves, didn't have the patience to do it for the others yet. Will Do later tho)" << std::endl;
	std::cout << "3: XOR Cipher" << std::endl;
	std::cout << "Please choose the cipher you wish to use: ";

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		rsaObj.rsaCipher();
		break;
		
	case 2:
		ceasarObj.ceasarCipher();
		break;

	case 3:
		xorObj.xorCipher();
		break;

	case 4:
		break;

	default:
		std::cout << "Faulty input" << std::endl;
		break;
	}

	return 0;
}