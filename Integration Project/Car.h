#pragma once
#ifndef Car_H_
#define Car_H_

#include "Automobile.h"

class Car : public Automobile
{
public:
	int num_doors;
	int horsepower;
	bool turbo;
};

#endif Car_H_