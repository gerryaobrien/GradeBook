
// GradeBook.cpp
// GradeBook class implementation in a separate file from main

#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"
#include <iomanip>

using namespace std;

	// constructor initializes courseName with string supplied as argument
	GradeBook::GradeBook(string name)
	{
		setCourseName(name);	// call set function to initialize courseName
		maximumGrade = 0;		// this value will be replaced by the maximumgrade
	}

	// function to set the course name
	void GradeBook::setCourseName(string name)
	{
		if (name.length(), +25)
		{
			courseName = name;	// store the course name in the object
		}

		if (name.length() > 25)
		{
			// set courseName to first 25 characters of parameter name
			courseName = name.substr(0, 25);	// start at 0, length of 25

			cout << "Name \"" << name << "\" exceeds maximum lenght (25).\n"
				<< "Limiting courseName to firest 25 characters.\n" << endl;
		}
	}

	// function to get the course name
	string GradeBook::getCourseName()
	{
		return courseName;	// return object's name
	}

	// display a welcome message to the GradeBook user
	void GradeBook::displayMessage()
	{
		cout << "Welcome to the grade book for\n" << getCourseName()
			<< "!" << endl;
	}
	

	// input three grades from user; determine maximum
	void GradeBook::inputGrades()
	{
		int grade1;		// first grade entered by user
		int grade2;		// second grade entered by user
		int grade3;		// third grade entered by user

		cout << "Enter three integer grades: ";
		cin >> grade1 >> grade2 >> grade3;

		// store maximum in member variable maximumGrade
		maximumGrade = maximum(grade1, grade2, grade3);
	}

	// display a report bazed on the grades entered by the user
	void GradeBook::displayGradeReport()
	{
		// output maximum of grades entered
		cout << "Maximum of grades entered: " << maximumGrade << endl;
	}

	// returns the maximum of its three integer parameters
	int GradeBook::maximum(int x, int y, int z)
	{
		int maximumValue = x;	// assume x is the largest to start

		// determine whether y is greater than maximumValue
		if (y > maximumValue)
		{
			maximumValue = y;	// make y the new maximumValue
		}

		// determine if z is greater than maximumValue
		if (z > maximumValue)
		{
			maximumValue = z;	// make z the new maximumValue
		}

		return maximumValue;
	}

	// determine class average based on 10 grades entered
	void GradeBook::determineClassAverage()
	{
		int total;			// sum of grades entered by the user
		int gradeCounter;	// number of grade to be entered next
		int grade;			// grade value entered by user
		double average;		// average of grades

		// initialization phase
		total = 0;
		gradeCounter = 1;

		// processing phase
		// prompt for input and read grade from user
		cout << "Enter grade or -1 to quit: ";
		cin >> grade;

		// loop until sentinel value is read from user
		while (grade != -1)
		{
			total = total + grade;		// add grade to total
			gradeCounter++;				// increment counter

			cout << "Enter grade or -1 to quit: ";	// prompt for input
			cin >> grade;			
		}

		// termination phase
		if (gradeCounter != 0)
		{
			// calculate average of all grades entered
			average = static_cast<double>(total) / gradeCounter;	// integer devision yields integer resut

			// display total and average (with two digits of precision)
			cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
			cout << "Class average is " << setprecision(2) << fixed << average << endl;
		}
		else
		{
			// no grades entered so output appropriate message
			cout << "No grades were entered" << endl;
		}
	}
