#include <iostream>
#include <string>
#include "Automobile.h"

using namespace std;

int main()
{
	Automobile zoomies;
	zoomies.setMake("Honda Accord");
	zoomies.setWheels(4);
	for (int x = 0; x < 60; x++)
	{
		int ZeroTo60 = x;
		zoomies.Accelerate();
		cout << "Time since launch: " << ZeroTo60 << " seconds." << "\n";
		cout << "Current Speed: " << zoomies.getSpeed() << "\n";
	}
	return 0;
}