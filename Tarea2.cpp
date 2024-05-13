#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int factorial=1;
    cout << "Ingrese un numero:\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        factorial = factorial*i;
       
    }
    cout <<factorial<<endl;
    return 0;
}