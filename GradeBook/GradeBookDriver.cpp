// GradeBookDriver.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"

using namespace std;


int main()
{
	// Create two GradeBook objects
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();

	return 0;
}