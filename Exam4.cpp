#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayDetails() {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void displayDetails() {
        cout << "Car: 4 wheels, used for family travel." << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayDetails() {
        cout << "Bike: 2 wheels, used for personal travel." << endl;
    }
};

class Truck : public Vehicle {
public:
    void displayDetails() {
        cout << "Truck: Used for carrying goods." << endl;
    }
};

int main() {
   
    Vehicle* v[3];

    v[0] = new Car();
    v[1] = new Bike();
    v[2] = new Truck();

   
    for (int i = 0; i < 3; i++) {
        v[i]->displayDetails();
    }

}