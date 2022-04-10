#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle {

private: 
	string manufacturer;
	int yearBuilt;
public:
	//Constructor
	Vehicle(){
		yearBuilt = 0;
		
	}
	//Getters
	string getManufacturer() {
		return manufacturer;
	}
	int getYear() {
		return yearBuilt;
	}
	//Setters
	void setManufacturer(string m) {
		manufacturer = m;
	}
	void setYear(int y) {
		yearBuilt = y;
	}

	//Display function
	void displayInfo();
};

void Vehicle::displayInfo() {
	cout << " \n\nVehicle Information: " << "\n\n";
	cout << " Manufacturer: " << getManufacturer() << endl;
	cout << " Year Built: " << getYear() << endl;

}