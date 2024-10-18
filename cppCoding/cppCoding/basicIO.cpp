//
//  basicIO.cpp
//  cppCoding
//
//  Created by Michael Kelley Jr. on 10/17/24.


#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 2 numbers:" << endl;
    
    // Get 2 integers from input 
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    
    // Output the sum 
    cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

    return 0; 
}