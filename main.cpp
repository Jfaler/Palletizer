/*
Justin Faler 
1/1/2017 

Version 1.0.0.6
*/
#include <iostream>
#include <string>
#include "Header.h"

void Palletizing(int count); 
int verify();

using namespace std; 

int main()
{
	int pallet = 1;
	int choice = 'y';
	char y = 1; 
	char n = 'n';

	std::cout << R"(
        ########################################
        #           +--------------+           #
        #          /|             /|           #
        #         / |            / |           #
        #        *--+-----------*  |           #
        #        |  |           |  |           #
        #        |  |           |  |           #
        #        |  |           |  |           #
        #        |  +-----------+--+           #
        #        | /            | /            #
        #        |/             |/             #
        #        *--------------*              #
        #                                      #
        ########################################        
        )" << endl;

	std::cout << "Ready to palletize? (y/n)" << endl;
	cin >> y;

	std::cout << "Press 1 to login" << endl;
	std::cout << "Press 2 to verify" << endl;
	std::cout << "Press 3 to Print Packing Slip" << endl;
	std::cout << "press 4 for help" << endl;
	cin >> choice;


	// Palletizing Menu

	switch (choice) {

	case 1: std::cout << "Please scan badge" << endl;
		break;
	case 2: std::cout << "Verify pallet is full" << endl;
		break;
	case 3: std::cout << "Printing label" << endl;
		break;
	case 4: std::cout << "You must have permissions for this tool" << endl;
		break;
	case 5: std::cout << "5" << endl;
	}
	cin >> choice; 


	return 0;
}

void Palletizing(int count)
{
	for (int i = 0; i < 1; i++)
	{
		if (i = 25)
		{
			std::cout << "Pallet is full" << endl;  
		}
		else
		{
			std::cout << "Pallet is missing totes" << endl;
		}
	}

}
int verify()
{
	int count = 0; 



	return 0;
}