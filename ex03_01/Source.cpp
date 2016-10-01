//
//Marnie Rimes
// HW03 ex03_01
// Liang exercise 9.2: The Fan class
// 09-27-16
//

#include<iostream>
#include"Fan.h"

using namespace std;

int main() 
{
	//initializes fans
	Fan fan1, fan2;
	//sets fan 1 properties
	fan1.speed = 3;
	fan1.radius = 10;
	fan1.on = true;

	//sets fan 2 properties
	fan2.speed = 2;
	fan2.radius = 5;

	//outputs fan properties
	//fan 1
	cout << "Fan one has a speed of " << fan1.speed << " a radius of " << fan1.radius;
	if (fan1.speed == true)
	{
		cout << " and is turned on\n";
	}
	else
		cout << " and is turned off\n";

	//fan 2
	cout << "Fan two has a speed of " << fan2.speed << " a radius of " << fan2.radius;
	if (fan2.speed == true)
	{
		cout << " and is turned on\n";
	}
	else
		cout << " and is turned off\n";

	return 0;
}