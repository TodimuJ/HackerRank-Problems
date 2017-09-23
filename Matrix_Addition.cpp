#include <iostream>

using namespace std;
void matrix(int arrayA[], int arrayB[], int arrayC[], int sizeA, int sizeB);
 
 
int main()
{
    int bucky[4] = {1, 2, 2, 4};
    int buck [4] = {6, 5, 7, 8};
    int arrayC[4];
    
    cout << "The resultant matrix is:" << endl;
    
     matrix(bucky, buck, arrayC, 4, 4);
    
   for(int i=0; i<4; i++)
   {
       cout << arrayC[i];
       cout << "  ";
}

}

void matrix(int arrayA[], int arrayB[],int arrayC[], int sizeA, int sizeB)
{
 

 
 if(sizeA == sizeB)
 {
        for(int i=0; i<sizeA; i++)
        {
            
            arrayC[i] = arrayA[i] + arrayB[i];
            
        }    
     
     
 }

}