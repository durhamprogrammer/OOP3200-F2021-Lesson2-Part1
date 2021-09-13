#include "Person.h"
#include <iostream>


Person::Person(std::string name, int age)// option 1: : m_name(name), m_age(age)
{
	// option 2: Long initialization
	//m_name = name;
	//m_age = age;

	// option 3: Use Setters
	SetName(name);
	SetAge(age);
}

Person::~Person()
= default;

std::string Person::GetName()
{
	return m_name;
}

int Person::GetAge()
{
	return m_age;
}

void Person::SetName(std::string name = "not set")
{
	m_name = name;
	std::cout << "Name set to: " << name << std::endl;
}

void Person::SetAge(int age = 0)
{
	m_age = age;
	std::cout << "Age set to: " << age << std::endl;
}

void Person::SaysHello()
{
	std::cout << GetName() << " says hello!" << std::endl;
}
