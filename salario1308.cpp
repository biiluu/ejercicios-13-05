#include <iostream>
using namespace std;
int main()
{
    string Nombre;
    int h;
    float ganancia=0, imp1=0.8, imp2=0.7;

    cout<<"Ingrese su nombre:\n";
    cin >> Nombre;
    cout <<"Ingrese la cantidad de horas trabajadas:\n";
    cin >> h;

    if (h<=160)
    {
        cout<<"$" << h*10;
    
    }
    else if (h>160)
    {   
        ganancia=(((h-160)*15)+1600);   
    }
    if (ganancia<=2000){
        cout<<"El trabajador "<< Nombre <<" Tiene un salario libre de impuestos";
    }
    else if (2000<ganancia<=2200)
    {
       cout << "El trabajador" << Nombre <<"Tiene un salario de:"<<"$"<<(ganancia*imp1);
    }
    else if (ganancia>=imp2)
    {
        cout <<"El trabajador" << Nombre <<"Tiene un salario:"<<"$"<<(ganancia*imp2);
    }
return 0;
}