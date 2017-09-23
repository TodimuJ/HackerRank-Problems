#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    int c;
    cout << "Type in a number" << endl;
    cin >> c;
    
    cout << "The factorial of " << c << " is: " << factorial(c);
    
    return 0;
}

int factorial(int n)
{
    if(n<1)
    return 1;
    
    else
    return n * factorial(n-1);
    
}