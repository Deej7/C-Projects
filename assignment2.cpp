/*
Name: Dylan Aguilar, 5008028748, CS135, Assignment 2
Description: A program using cmath and iomanip
Input: radius of a sphere, 2 sides of a triangle, and a real number
Output: volume, third side of triangle, absolute value
*/

//include file libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//define constants for program
const double PI = 3.14;
const int WIDTH1 = 10;
const int WIDTH2 = 11;

int main(){

//define variables for program
double radius = 0;
double side1 = 0;
double side2 = 0;
double realNumber = 0;

//sets decimal precision to 2
cout << fixed << setprecision(2);
  
//ask the user for the radius value of the Sphere
cout << "Please enter the radius value of the Sphere: ";
cin >> radius;
cout << endl;

//ask the user to enter the length of the two side of a triangle
cout << "Please enter the length values of two sides of a triangle: ";
cin >> side1 >> side2;
cout << endl;

//ask the user to enter a any real number
cout << "Please enter any real number: ";
cin >> realNumber;
cout << endl;
  
//output of Sphere Volume table heading and header row
cout << "Sphere Volume:" << endl;
cout << "+------------+------------+" << endl;

//radius and volume headers
cout << "| ";
cout << setfill(' ') << left << setw(WIDTH2) << "Radius";
cout << "| ";
cout << setfill(' ') << left << setw(WIDTH2) << "Volume";
cout << "|" << endl;

//output of middle row of Sphere Volume table
cout << "+------------+------------+" << endl;

//calculated radius and volume
cout << "| ";
cout << setfill(' ') << left << setw(WIDTH2) << radius;
cout << "| ";
cout << left << setw(WIDTH2) << PI * pow(radius, 3) * 4 / 3;
cout << "|" << endl;

//output of bottom row of Sphere Volume table
cout << "+------------+------------+" << endl;
cout << endl;

  
//output of Pythagorean Theorem table heading and header row
cout << "Pythagorean Theorem:" << endl;
cout << "+------------+------------+------------+" << endl;

//sidelength headers
cout << "|";
cout << setfill(' ') << right << setw(WIDTH2) << "Side1";
cout << " |";
cout << setfill(' ') << right << setw(WIDTH2) << "Side2";
cout << " |";
cout << setfill(' ') << right << setw(WIDTH2) << "Side3";
cout << " |" << endl;

//output of middle row of Pythagorean Theorem table  
cout << "+------------+------------+------------+" << endl;

//sidelength
cout << "|";
cout << setfill(' ') << right << setw(WIDTH2) << side1;
cout << " |";
cout << setfill(' ') << right << setw(WIDTH2) << side2;
cout << " |";
cout << right << setw(WIDTH2) << sqrt(pow(side1, 2) + pow(side2, 2));
cout << " |" << endl;

//output of bottom row of Pythagorean Theorem table
cout << "+------------+------------+------------+" << endl;
cout << endl;
  
//output of Absolute Value table heading and header row
cout << "Absolute Value:" << endl;
cout << "+------------+------------+" << endl;

//value headers
cout << "| ";
cout << setfill(' ') << left << setw(WIDTH2) << "Value";
cout << "| ";
cout << setfill(' ') << left << setw(WIDTH2) << "Abs. Value";
cout << "|" << endl;

//output of middle row of ABS value table
cout << "+------------+------------+" << endl;

//calculated absolute value
cout << "| ";
cout << setfill(' ') << left << setw(WIDTH2) << realNumber;
cout << "| ";
cout << setfill(' ') << left << setw(WIDTH2) << abs(realNumber);
cout << "|" << endl;

//output of bottom row of ABS value table
cout << "+------------+------------+" << endl;
cout << endl;

  return 0;
}