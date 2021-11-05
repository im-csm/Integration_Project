#include "Automobile.h"
#include <string>

void Automobile::setMake(std::string company_name)
{
	Automobile::make = company_name;
}

void Automobile::setWheels(int wheel_count)
{
	Automobile::num_wheels = wheel_count;
}

void Automobile::Accelerate()
{
	Automobile::speed++;
}

void Automobile::brake()
{
	Automobile::speed--;
}

int Automobile::getSpeed()
{
	return speed;
}

