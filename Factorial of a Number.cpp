#include <iostream>
using namespace std;

int fac(int n)
{
    // base condition
    if (n == 0)
        return 1;
        
    // recursion call
    return n * fac(n - 1); 
}

int main() {
    //Write your code here
    int n;
    cin >> n;
    if (n < 0)
        cout << "Error";
    else
    {
        cout << fac(n);
    }
    return 0;
}
