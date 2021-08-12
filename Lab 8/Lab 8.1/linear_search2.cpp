// This program performs a linear search on a integers array

// Alberto Conde
// October 20, 2020

#include <iostream>
using namespace std;

int linearSearch(const int[], int, int); // function prototype

const int SIZE = 8;

int main()
{
    int tests[SIZE] = {3,6,-19,5,5,0,-2,99};
    int found;
    double num = 0;

    while (num != -1)
    {
        cout << "Enter a number to search for or enter -1 to exit:" << endl;
        cin >> num;

        found = linearSearch(tests, SIZE, num);

        if (found == -1)
            cout << "The number " << num
                 << " was not found in the list" << endl;
        else
            cout << "The letter " << num << " is in the " << found + 1
                 << " position of the list" << endl;
    }
    

    return 0;
}

//*******************************************************************
//    searchList
//
//  task:           This searches an array for a particular value
//  data in:       List of values in an array, the number of
//                   elements in the array, and the value searched for
//                   in the array
//  data returned: Position in the array of the value or -1 if value
//                   not found
//
//*******************************************************************

int linearSearch(const int arr[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (index < size && !found)
    {
        if (arr[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;    // if the value is not found, -1 is returned
}

// If you search for 5, it will point out only the 5 in the first position (position 4).
