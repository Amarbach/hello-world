#include "stdafx.h"
#include "Dog.h"
using namespace std;


//Konstruktory
Dog::Dog() {};
Dog::Dog(std::string DogName)

//Akcesory


// Debug methods
string Dog::GetInfo()
{
	string liveDesc = isAlive ? "Dog " : "Dead dog";
	string infoString = liveDesc + GetName() + " of breed " + GetBreed() + " and age " + std::to_string(age) + " and power " + std::to_string(power);
	return infoString;
}

void Dog::PrintInfo()
{
	cout << GetInfo() << endl;
}