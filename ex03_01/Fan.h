#pragma once
//
//
//Fan class
#include<iostream>
#include<string>
class Fan 
{
public:
	int speed;
	bool on;
	double radius;
	//default
	Fan()
	{
		speed = 1;
		on = false;
		radius = 5;
	}

	bool turnOn()
	{
		return on = true;
	}
	bool turnOff()
	{
		return on = false;
	};
	void setRadius();
	void setSpeed();
};