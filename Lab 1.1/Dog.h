#pragma once

class Dog
{
private:
	std::string name;
	std::string breed;
	int power = 0;
	int aggresion = 0;
	int age = 0;
	bool isMale = true;
	bool isAlive = true;

public:
	// dodaæ konstruktory i destruktor
	Dog::Dog();
	Dog::Dog(std::string DogName);
	Dog::Dog(std::string DogName, int DogAge, std::string DogBreed, int DogPower, int DogAggr, bool DogSex);


	~Dog();

	// Akcesory - setters
	void SetName(std::string);
	void SetBreed(std::string);
	void SetPower(int);
	void SetAggresion(int);
	void SetAge(int);

	// Akcesory - getters
	std::string GetName() const;
	std::string GetBreed() const;
	int GetPower() const;
	int GetAggresion() const;
	int GetAge() const;

	// Debug info
	std::string GetInfo();
	void PrintInfo();
};

