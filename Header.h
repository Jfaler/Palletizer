/*
Justin Faler
1/1/2017

Version 1.0.0.6
*/
#pragma once
#ifndef PALLET
#define PALLET 

class Pallet
{
private: 

public:
	void Palletizing(int count);
	double getHeight() const;
	double setHeight(); 
	double getWeight() const; 
	double setWeight();
};
#endif
