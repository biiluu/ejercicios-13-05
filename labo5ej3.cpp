#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Ingrese un numero del 0 al 100\n";
    cin >> n;

    switch (n)
    {
    case 90 ... 100:
        cout << "La calificacion es A\n";
        break;

    case 80 ... 89:
        cout << "La calificacion es B\n";
        break;

    case 70 ... 79:
        cout << "La calificacion es C\n";
        break;

    case 60 ... 69:
        cout << "La calificacion es D\n";
        break;

    case 0 ... 59:
        cout << "La clasificacion es E\n";
        break;

    default:
        cout << "La opcion ingresada no es valida\n";
        break;
    }
return 0;
}