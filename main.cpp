/*
Justin Faler 
1/1/2017 

Version 1.0.0.0
*/
#include <iostream>

using namespace std; 

int main()
{
	int pallet = 25; 

	cout << "Ready to palletize?" << endl; 
	
	// Palletizing Menu

	switch (1) {
	    case 1: cout << "1" << endl; 
		case 2: cout << "2" << endl;
		case 3: cout << "3" << endl;
		case 4: cout << "4" << endl;
			break;
		case 5: cout << "5 help" << endl;
	}

	for (int i = 0; i < 1; i++)
	{
		if (i = 25)
		{
			cout << "Pallet is full" << endl;  
		}
		else
		{
			cout << "Pallet is missing totes" << endl;
		}
	}

	return 0; 
}