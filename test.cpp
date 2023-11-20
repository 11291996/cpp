#include <iostream>
using namespace std;
#include <exception> //what()
#include <stdexcept> //runtime_error() //this imports exception as well

int main() {
    try {
        // Simulate an exception by dividing by zero
        int numerator = 10;
        int denominator = 0;
        
        if (denominator == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        
        int result = numerator / denominator;
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        // Catch and handle the exception
        cerr << "Exception caught: " << e.what() << std::endl; //cout error
    }

    return 0;
}