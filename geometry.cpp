/*geometry.cpp
This is a program that displays a menu to calculate the area of a circle, a rectangle, or the area of a triangle.
Vagner Domingues ml40 and Crystal Brusch ml149
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

	//Declare and initialize variables:
	const double PI = 3.14, HALF_TRIG = .5;
	double area = 0.0, radius = 0.0, length = 0.0, width = 0.0, base = 0.0, height = 0.0;
	int menuChoice = 0;

	//Intro
	cout << "Welcome to the Geometry Calculator!\n";

	//Display menu and prompt for menu choice
	do
	{
	//Create switch structure
	cout << "Geometry Calculator\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Exit\n\n";
	cout << "Enter your choice (1 - 4): ";
	cin >> menuChoice;
	switch (menuChoice)
	{
		//Case 1 = area of circle		
		case 1:
		do
		{	
			//prompt for radius
			cout << "Enter radius: ";
			cin >> radius;
			//Validate
			if (radius <0) 
				cout << "Invalid. Please enter a number larger than 0 radius."<< endl;
                                
			else
                                cout << "\n";
 
                                //if (cin.good())
				   
                                //else
                                //   cout << "Input MUST be numeric!" << endl; 
                             
				
		} while (radius< 0);
		//Calculate radius A=pi * radius^2
		area = PI * (radius * radius);
		//Display area
		cout << "The area of the circle is: " <<fixed<<showpoint<<setprecision(2)<<area<< endl;
		break;
		
		//Case 2= area of rectangle
		case 2:
		do
		{	
			//prompt for length
			cout << "Enter length: ";
			cin >> length;
			//Validate
			if (length <0)
				cout << "Invalid. Please enter a number larger than 0 for length."<< endl;
			else
				cout << "\n";
				
		} while (length< 0);

		do
		{	
			//prompt for width
			cout << "Enter width: ";
			cin >> width;
			//Validate
			if (width <0)
				cout << "Invalid. Please enter a number larger than 0 for width."<< endl;
			else
				cout << "\n";
				
		} while (width< 0);
		//Calculate A = length * width
		area = length * width;
		//Display area
		cout << "The area of the rectangle is: " <<fixed<<showpoint<<setprecision(2)<<area<< endl;
		break;

		//Case 3 = area of triangle
		case 3:
		do
		{	
			//prompt for base
			cout << "Enter base: ";
			cin >> base;
			//Validate
			if (base <0)
				cout << "Invalid. Please enter a number larger than 0 for base."<< endl;
			else
				cout << "\n";
				
		} while (base< 0);
		do
		{	
			//prompt for height
			cout << "Enter height: ";
			cin >> height;
			//Validate
			if (height <0)
				cout << "Invalid. Please enter a number larger than 0 for height." << endl;
			else
				cout << "\n";
				
		} while (height< 0);
		//Calculate A = .5 constant * base * height
		area = HALF_TRIG * base * height;
		//Display area
		cout << "The area of the rectangle is: " <<fixed<<showpoint<<setprecision(2)<<area<< endl;
		break;

		//Case 4 = exit
		case 4: 
		cout << "Good Bye\n";
		break;

		default:
		cout << "Invalid. You must choose 1-4 from the menu\n"<< endl;
	}
	}
	while (menuChoice != 4);
	
	return 0;



}
