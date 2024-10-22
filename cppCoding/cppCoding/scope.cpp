//
//  scope.cpp
//  cppCoding
//
//  Created by Michael Kelley Jr. on 10/22/24.


#include <iostream>
using namespace std;

int main()
{
    int sum = 0; 
    // sum values 1-10 inclusive

    for (int val = 1; val <= 10; val++)
    {
        sum += val; 
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;

    return 0;
}