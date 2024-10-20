//
//  ifStatement.cpp
//  cppCoding
//
//  Created by Michael Kelley Jr. on 10/20/24.
//


#include <iostream>
using namespace std;

int main()
{

    int currentVal = 0, val = 0;

    // If-else with a while in there too
    if (cin >> currentVal)
    {
        int count = 1; 
        while (cin >> val)
        {
            if (val == currentVal)
                ++count;
                else
                {
                    cout << currentVal << " occurs " << count << " times" << endl;
                    currentVal = val;
                    count = 1;
                }
        }
            cout << currentVal << " occurs " << count << " times" << endl;
    }
        return 0; 
}
