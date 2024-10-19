//
//  whileLoop.cpp
//  cppCoding
//
//  Created by Michael Kelley Jr. on 10/19/24.
//

#include <iostream>
using namespace std;

int main()
{
    int sum = 0, val = 1;

    while (val <= 10) 
    {
        sum += val;
        ++val;
    }
     // Display the result 
    cout << "Sum of 1 to 10 inclusive is " << sum << endl; 
    
    return 0; 
}
