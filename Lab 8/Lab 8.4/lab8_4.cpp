// Alberto Conde
// October 28, 2020

#include <iostream>
using namespace std;

// function prototypes
void selectionSortArray(int[], int);
void displayArray(int[], int);
int binarySearch(int[], int, int);

int SIZE = 50;

int main()
{

    int values[SIZE];
    int count;
    int found, value;
    int total;
    double mean;
    double div;
    
    
    
    cout << "How many integers do you want to input? You can choose maximum 50 integers\n";
    cin >> SIZE;
    
    
    cout << "Enter the numbers of your preference:" << endl;
    for (count = 0; count < SIZE; count++)
        cin >> values[count];
   

    selectionSortArray(values, SIZE);

    cout << "The values after the selection sort is performed are:" << endl;
    displayArray(values, SIZE);
    
    cout << "Enter an integer to search for:" << endl;
    cin >> value;
    
    found = binarySearch(values, SIZE, value);
    
    if (found == -1)
        cout << "The value " << value << " is not in the list" << endl;
    else
        cout << "The value " << value << " is in position number "
             << found + 1 << " of the list" << endl;
    
    for (count = 0; count < SIZE; count++)
        total += values[count];
    
    div = count;
    
    mean = total/div;
    cout << "The mean of the " << count << " numbers is " << mean << endl;

    return 0;
}


void displayArray(int array[], int elems)
{
    for (int count = 0; count < elems; count++)
        cout << array[count] << "    " << endl;
}


void selectionSortArray(int array[], int elems)
{
    int seek;
    int minCount;
    int minValue;
    
    for (seek = 0; seek < (elems - 1); seek++)
    {
        minCount = seek;
        minValue = array[seek];

        for (int index = seek + 1; index < elems; index++)
        {
            if (array[index] > minValue)
            {
                minValue = array[index];
                minCount = index;
            }
        }
        array[minCount] = array[seek];
        array[seek] = minValue;
    }
}

int binarySearch(int array[], int numElems, int value)
{
    int first = 0;
    int last = numElems - 1;
    int middle;
                                

    while (first <= last)
    {
        middle = first + (last - first) / 2;

        if (array[middle] == value)
            return middle;

        else if (array[middle]>value)
            first = middle + 1;

        else
            last = middle - 1;
                                
    }

    return -1;
}

