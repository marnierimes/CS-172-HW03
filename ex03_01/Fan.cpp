//
//
#include<iostream>
#include"Fan.h"

Fan::Fan()
{
	speed = 1;
	on = false;
	radius = 5;
	
}

bool Fan::turnOn()
{
	return on = true;
}
bool Fan::turnOff()
{
	return on = false;
};