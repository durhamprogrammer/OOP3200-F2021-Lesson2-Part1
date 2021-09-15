#pragma once
#ifndef __STUDENT__
#define __STUDENT__


#include "Person.h"

class Student : public Person
{
public:
	// CONSTRUCTOR(S)
	Student(const std::string& name, int age, std::string& student_id);

	// DESTRUCTOR
	~Student();

	// GETTERS (ACCESSORS)
	std::string GetStudentID() const;
	bool IsStudying() const;

	// SETTERS (MUTATORS)
	void SetStudentID(const std::string& student_id);
	void SetIsStudying(bool state);

	// METHODS (PUBLIC FUNCTIONS)
	void Studies() const;

private:
	std::string m_studentID;
	bool m_isStudying;

};

#endif /* defined (__STUDENT__) */

