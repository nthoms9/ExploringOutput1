/*
Nick Thoms
c++ 2019
Due 9/12/19
Lab 2 Exploring Outputs pt.1
Lab Description: Output your class schedule to the screen to become more familliar with
                 commands and outputs
*/

#include<iostream>

using namespace std;

/*Text representing each day of the week and each individual class with it's 
corresponding time and class number is assigned to a const string variable. */

const string day1 = "Monday  ";
const string day2 = "Tuesday ";
const string day3 = "Wednesday";
const string day4 = "Thursday";
const string day5 = "Friday  ";
const string class1 = "8:00   College Algebra and Trigonometry 127";
const string class2 = "9:10   The College Experience 108 ";
const string class3 = "10:20  Gen Chemistry 1 165";
const string class4 = "11:30  Engineering Problems 180";
const string class5 = "12:40  C++ 162";

/* Each cout represnets a different days schedule. Next the classes for each day are 
displayed in chronilogical order, each on a new line. There is a tab between the day 
and the class*/

int main()
{
	cout << day1 << "\t" << class1 << endl << day1 << "\t" << class2 << endl << day1 
		 << "\t" << class3 << endl << day1 << "\t" << class5 << endl;
	cout << day2 << "\t" << class1 << endl << day2 << "\t" << class4 << endl << day2
		 << "\t" << class5 << endl;
	cout << day3 << "\t" << class1 << endl << day3 << "\t" << class2 << endl << day3 
		 << "\t" << class3 << endl << day3 << "\t" << class5 << endl;
	cout << day4 << "\t" << class1 << endl << day4 << "\t" << class4 << endl << day4 
		 << "\t" << class5 << endl;
	cout << day5 << "\t" << class1 << endl << day5 << "\t" << class2 << endl << day5 
		 << "\t" << class3 << endl;

	return 0;
}