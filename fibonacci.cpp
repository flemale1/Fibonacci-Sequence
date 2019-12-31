/*
 * Fibonacci Sequence
 * By Sam Firnhaber
 */
 
#include <iostream>
using namespace std;

//Swaps the value of the parameters
void swap(unsigned int& a, unsigned int& b) {
    a += b;
    b = a - b;
    a -= b;
}

//Display digits of a fibonacci sequence up to x
void fibonacciSequence(unsigned int x) {
    unsigned int a = 0;
    unsigned int b = 1;
    
    //Handles base case
    if (x >= 1)
        cout << b << " ";
        
    //Finds all other digits of the fibonacci sequence needed
    for (int i = 1; i < x; i++) {
        a += b;
        cout << a << " ";
        swap(a, b);
    }
}

int main() {
    int x;
    cout << "How many digits of a fibonacci sequence would you like to display?" << endl;
    //Input must be an unsigned integer
    cin >> x;
    fibonacciSequence(x);
    return 0;
}
