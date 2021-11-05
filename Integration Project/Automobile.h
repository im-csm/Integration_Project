#pragma once
#ifndef Automobile_H_
#define Automobile_H_

#include <string>

class Automobile
{
private:
	int num_wheels;
	int speed{ 0 };
	std::string make;
	int model_year;
public:
	void setMake(std::string company_name);
	void setWheels(int wheel_count);
	void Accelerate();
	void brake();
	int getSpeed();
};

#endif Automobile_H_

