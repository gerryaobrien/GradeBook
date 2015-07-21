#pragma once
// GradeBook.h
// GradeBook class definition in a separate file from main

#include <string>

using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	// constructor initializes courseName with string supplied as argument
	GradeBook(string name);

	// function to set the course name
	void setCourseName(string name);

	// function to get the course name
	string getCourseName();

	// display a welcome message to the GradeBook user
	void displayMessage();

	// input three grades from user
	void inputGrades();

	// display a report based on the grades
	void displayGradeReport();

	// determine max of 3 values
	int maximum(int, int, int);

	// averages grades entered by the user
	void determineClassAverage();

private:
	string courseName;	// course name for this GradeBook
	int maximumGrade;	// maximum of three grades
};
