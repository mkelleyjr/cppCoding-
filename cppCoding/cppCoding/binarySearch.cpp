//
//
//  binarySearch.cpp
//
//  Created by Michael Kelley Jr. on 10/18/24.
//

#include <iostream>
using namespace std;

    // Define a function for Iterative method
    int binarySearchArray(int array[], int x, int low, int high)
    {
        
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if (x == array[mid])
                return mid;
            
            if (x > array[mid])
                low = mid + 1;
            
            else
                high = mid - 1;
        }
        
        return -1;
    }

// Main Program
int main()
{
    // Define elements in our array
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int x = 7;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearchArray(array, x, 0, n-1);
    
    if (result == -1)
        cout << "Not found";
    else
        cout << "Element is found at index " << result << endl; 
}
