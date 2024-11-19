#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function for run-time polymorphism
    virtual void sound() {
        cout << "This is a generic animal sound." << endl;
    }
};

// Derived class for Bird
class Bird : public Animal {
public:
    void sound() override { // Override the sound function for Bird
        cout << "The bird chirps." << endl;
    }
};

// Derived class for Lion
class Lion : public Animal {
public:
    void sound() override { // Override the sound function for Lion
        cout << "The lion roars." << endl;
    }
};

// Example of compile-time polymorphism through function overloading
void display(string str) {
    cout << "String: " << str << endl;
}

void display(float f) {
    cout << "Float: " << f << endl;
}

int main() {
    // Run-time polymorphism with virtual functions
    Animal *animal1 = new Bird();
    Animal *animal2 = new Lion();
    
    animal1->sound(); // Output: The bird chirps.
    animal2->sound(); // Output: The lion roars.
    
    // Compile-time polymorphism with function overloading
    display("Hello, world!"); // Output: String: Hello, world!
    display(9.81f); // Output: Float: 9.81
    
    // Clean up
    delete animal1;
    delete animal2;
    
    return 0;
}
