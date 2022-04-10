#pragma once
#include "Vehicle.h";

class Truck : public Vehicle {
private: 
	int towingCap;
public:
	//Constructor
	Truck() {
		towingCap = 0;
	}
	//Getter
	int getCap() {
		return towingCap;
	}
	//Setter
	void setCap(int c) {
		towingCap = c;
	}

	//Display function
	void displayTruck() {
		displayInfo();
		cout << " Towing Capacity: " << getCap();
	}

};