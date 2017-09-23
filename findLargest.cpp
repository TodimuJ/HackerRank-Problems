#include <iostream>

using namespace std;

int findLargest( int anArray[], int size);

int main()
{
    int bucky[6] = {790067, 454, 123, 697097, 5678, 890};
    
    cout << "The largest number in the array is: " << findLargest (bucky, 6) << endl;
    
}

int findLargest( int anArray[], int size)
{
    int largest = anArray[0];
    
    for (int i = 0; i < size; i++)
    {
        if(anArray[i] > largest)
        
        largest = anArray[i];
    }
        

        return largest;
}