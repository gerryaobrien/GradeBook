// GradeBook.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"


using namespace std;


int main()
{
	// Create two GradeBook objects
	GradeBook gradeBook1("CS101 Introduction to C++ Programnming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	// display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;

    return 0;
}

