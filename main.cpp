/*
Justin Faler 
1/1/2017 
Version 1.0.0.1
*/
#include <iostream>
#include <string>

using namespace std; 

int main()
{
	int pallet = 25;
	int choice = 0;
	char y = 'y'; 
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

	cout << "Ready to palletize? (y/n)" << endl;


	// Palletizing Menu

	switch (choice) {

	case 1: std::cout << "1 " << endl;
		break;
	case 2: std::cout << "2" << endl;
		break;
	case 3: std::cout << "3" << endl;
		break;
	case 4: std::cout << "4" << endl;
		break;
	case 5: std::cout << "5 help" << endl;
	}
	cin >> choice; 

	return 0;
}

int Palletizing()
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

	return 0; 
}
