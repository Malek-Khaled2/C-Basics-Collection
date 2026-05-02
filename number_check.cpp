#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is Positive, Negative, or Zero
    if (number > 0) {
        cout << "Positive ";
    } 
    else if (number < 0) {
        cout << "Negative ";
    } 
    else {
        cout << "Zero" << endl;
        return 0; // Exit early since zero is handled
    }

    // Check if the number is Even or Odd
    if (number % 2 == 0) {
        cout << "Even" << endl;
    } 
    else {
        cout << "Odd" << endl;
    }

    return 0;
}
