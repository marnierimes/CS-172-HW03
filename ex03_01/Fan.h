#pragma once
//
//
//Fan class
class Fan 
{
public:
	int speed;
	bool on;
	double radius;
	//default
	Fan(){}

	bool turnOn()
	{
		on = true;
	}
	bool turnOff()
	{
		on = false;
	};
	void setRadius()
	{

	}
};