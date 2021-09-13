#pragma once
#ifndef __PERSON__
#define __PERSON__

#include <string>

class Person
{
public:
	// CONSTRUCTOR
	Person(std::string name, int age);

	// DESTRUCTOR
	~Person();

	// GETTERS (ACCESSORS)
	std::string GetName();
	int GetAge();

	// SETTERS (MUTATORS)
	void SetName(std::string name);
	void SetAge(int age);

	// METHODS (PUBLIC FUNCTIONS)
	void SaysHello();

private:
	// PRIVATE MEMBER VARIABLES
	std::string m_name;
	int m_age;
};

#endif /* defined (__PERSON__) */