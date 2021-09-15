#pragma once
#ifndef __PERSON__
#define __PERSON__

#include <string>

class Person
{
public:
	// CONSTRUCTOR
	Person(const std::string& name, int age);

	// DESTRUCTOR
	~Person();

	// GETTERS (ACCESSORS)
	std::string GetName() const;
	int GetAge() const;

	// SETTERS (MUTATORS)
	void SetName(const std::string& name);
	void SetAge(int age);

	// METHODS (PUBLIC FUNCTIONS)
	void SaysHello() const;

private:
	// PRIVATE MEMBER VARIABLES
	std::string m_name;
	int m_age;
};

#endif /* defined (__PERSON__) */