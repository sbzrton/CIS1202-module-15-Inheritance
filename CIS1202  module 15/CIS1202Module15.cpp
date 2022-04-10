
// Sha'Maria Barton
// CIS1202 K01
// April 14th, 2022

#include "Vehicle.h";
#include "Car.h";
#include "Truck.h";
using namespace std;

int main() {

	Vehicle usrVehicle;
	Truck usrTruck;
	Car usrCar;

	string userMan;
	int year = 0;
	int doors = 0;
	int capacity = 0;


	//Vehicle
	cout << "\nVehicle:\n\n ";
	cout << " Enter in the manufacturer: "; getline(cin, userMan);

	usrVehicle.setManufacturer(userMan);
	cout << "  Enter in the year built: "; cin >> year;
	usrVehicle.setYear(year);

	usrVehicle.displayInfo();


	//Car
	cout << " \n\nCar:\n\n";
	getline(cin, userMan); //Bugged in output menu and cin.ignore did not work. Had to resort to placing a getline;

	cout << " Enter in the manufacturer: "; getline(cin, userMan);
	usrCar.setManufacturer(userMan);

	cout << " Enter in the year built: "; cin >> year;
	usrCar.setYear(year);

	cout << " Enter in the number of doors: "; cin >> doors;
	usrCar.setDoors(doors);

	 usrCar.displayCar();

	//Truck 
	cout << " \n\nTruck:\n\n";

	getline(cin, userMan); //Bugged in output menu and cin.ignore did not work. Had to resort to placing a getline;
	cout << " Enter in the manufacturer: "; getline(cin, userMan);
	usrTruck.setManufacturer(userMan);

	cout << " Enter in the year built: "; cin >> year;
	usrTruck.setYear(year);

	cout << " Enter in the towing capacity: "; cin >> capacity;
	usrTruck.setCap(capacity);

	usrTruck.displayTruck();

	cin.ignore(INT_MAX);
}
