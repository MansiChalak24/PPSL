#include <iostream>
using namespace std;

double divide(int numerator, int denominator) {
if (denominator == 0) {
throw "Division by zero error!";
}
return static_cast<double>(numerator) / denominator;
}
int main() {
int num, denom;
cout << "Enter numerator: ";
cin >> num;
cout << "Enter denominator: ";
cin >> denom;
try {

double result = divide(num, denom);
cout << "Result: " << result << endl;
}
catch (const char* e) {

cout << "Exception caught: " << e << endl;
}
return 0;
}