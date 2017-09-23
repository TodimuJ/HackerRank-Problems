// Example program
#include <iostream>
#include <string>

using namespace std;

int factorial(int );

int main()
{
        int b;
        
        cout << "Type in a number" << endl;
        cin >> b;
        
        cout << "The factorial of " << b << " is: " << factorial(b) << endl;
        
        return 0;
}

int factorial(int a )
{
 
 int fact=1;
 
 while(a>1)
 {
  fact *= a;
  a--;
 }
 
 return fact;
    
}