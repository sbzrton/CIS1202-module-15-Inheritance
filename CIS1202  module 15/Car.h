#pragma once
#include "Vehicle.h";


class Car : public Vehicle {
private:
	int doors;
public:
	Car() {
		doors = 0;
		
	}
	//Getter
	int getDoors() {
		return doors;
	}
	//Setter
	void setDoors(int d) {
		doors = d;
	}
//Display Function
	void displayCar() {
		displayInfo();
		cout << " Doors: " << getDoors();
	}
};