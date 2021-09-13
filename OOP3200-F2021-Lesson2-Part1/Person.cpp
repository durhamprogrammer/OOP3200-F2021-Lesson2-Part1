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

/// <summary>
/// This method returns the value of the m_name member variable
/// </summary>
std::string Person::GetName()
{
	return m_name;
}

/// <summary>
/// This method returns the value of the m_age member variable
/// </summary>
int Person::GetAge()
{
	return m_age;
}

/// <summary>
/// This method takes one string parameter, name, and sets the m_name variable to its value
/// </summary>
/// <param name="name"></param>
void Person::SetName(std::string name = "not set")
{
	m_name = name;
	std::cout << "Name set to: " << name << std::endl;
}

/// <summary>
/// This method takes one integer parameter, age, and sets the m_age variable to its value
/// </summary>
/// <param name="age"></param>
void Person::SetAge(int age = 0)
{
	m_age = age;
	std::cout << "Age set to: " << age << std::endl;
}

/// <summary>
/// This method outputs the m_name value and says hello
/// </summary>
void Person::SaysHello()
{
	std::cout << GetName() << " says hello!" << std::endl;
}
