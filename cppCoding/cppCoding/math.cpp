//
//  math.cpp
//  cppCoding
//
//  Created by Michael Kelley Jr. on 10/28/24.

#include <iostream>
using namespace std;

int main()
{
    cout << "Below are some math operations in C++" << endl;

    int sum = 0;
    int sumTwo; 
    int a = 1; 
    int b = 2;
    int c = 3;

    sum = a + b + c;
    sumTwo = c - b - a; 

    cout << "The sum of a, b, and c is " << sum << endl;
    cout << "C - B - A is " << sumTwo << endl; 
}