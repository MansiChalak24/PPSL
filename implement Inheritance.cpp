#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle created." << endl;
    }
    void start() {
        cout << "Vehicle is now running." << endl;
    }
};

// Derived class
class Motorcycle : public Vehicle {
public:
    Motorcycle() {
        cout << "Motorcycle created." << endl;
    }
    void rev() {
        cout << "Motorcycle revving: Vroom Vroom!" << endl;
    }
};

int main() {
    // Creating an object of the derived class
    Motorcycle myMotorcycle;
    
    // Accessing base class method
    myMotorcycle.start(); // Output: Vehicle is now running.
    
    // Accessing derived class method
    myMotorcycle.rev(); // Output: Motorcycle revving: Vroom Vroom!
    
    return 0;
}
