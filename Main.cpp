#include <string>
#include "Racional.h"
#include <iostream>
using namespace std;
int menu();
void suma();
void resta();
void sumaAsignacion();
void restaAsignacion();
void multiplicacion();
void multiplicacionAsignacion();
void division();
void divisionAsigancion();

int main()
{
    int opcion;
    bool v = true;
    while (v == true)
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
        {
            suma();
            break;
        }
        case 2:
        {
            sumaAsignacion();
            break;
        }
        case 3:
        {
            resta();
            break;
        }
        case 4:
        {
            restaAsignacion();
            break;
        }
        case 5:
        {
            multiplicacion();
            break;
        }
        case 6:
        {
            multiplicacionAsignacion();
            break;
        }
        case 7:
        {
            division();
            break;
        }
        case 8:
        {
            divisionAsigancion();
            break;
        }
        case 9:
        {
            v = false;
            break;
        }
        }
    }
    return 0;
}

int menu()
{
    int opcion = 0;
    while (opcion <= 0 || opcion > 9)
    {
        cout << endl
             << "-----Laboratorio#7 Carlos Romero-----" << endl;
        cout << "1) Suma" << endl;
        cout << "2) Suma y Asignación" << endl;
        cout << "3) Resta" << endl;
        cout << "4) Resta y Asignación" << endl;
        cout << "5) Multiplicación" << endl;
        cout << "6) Multiplicación y Asignación" << endl;
        cout << "7) División" << endl;
        cout << "8) División y Asignación" << endl;
        cout << "9) Salir" << endl;
        cout << "Ingrese una Opción: " << endl;
        cin >> opcion;
        cout << endl;
    }
    return opcion;
}

void suma()
{
    cout << "---SUMA---" << endl;
    int numerador;
    int denominador;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional = new Racional(numerador, denominador);
    cout << ">>Racional 1: " << *racional;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional2 = new Racional(numerador, denominador);
    cout << ">>Racional 2: " << *racional2 << endl;
    const Racional *suma;
    suma = *racional + *racional2;
    cout << "**>>Suma: " << *suma << endl;
}

void resta()
{
    cout << "---RESTA---" << endl;
    int numerador;
    int denominador;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional = new Racional(numerador, denominador);
    cout << ">>Racional 1: " << *racional;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional2 = new Racional(numerador, denominador);
    cout << ">>Racional 2: " << *racional2 << endl;
    const Racional *resta;
    resta = *racional - *racional2;
    cout << "**>>Resta: " << *resta << endl;
}

void sumaAsignacion()
{
    int numerador;
    int denominador;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional = new Racional(numerador, denominador);
    cout << *racional;
}

void restaAsignacion()
{
    int numerador;
    int denominador;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional = new Racional(numerador, denominador);
    cout << *racional;
}

void multiplicacion()
{
    cout << "---MULTIPLICACIÓN---" << endl;
    int numerador;
    int denominador;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional = new Racional(numerador, denominador);
    cout << ">>Racional 1: " << *racional;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional2 = new Racional(numerador, denominador);
    cout << ">>Racional 2: " << *racional2 << endl;
    const Racional *multiplicacion;
    multiplicacion = *racional * (*racional2);
    cout << "**>>Multiplicación: " << *multiplicacion << endl;
}

void multiplicacionAsignacion()
{
    int numerador;
    int denominador;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional = new Racional(numerador, denominador);
    cout << *racional;
}

void division()
{
    cout << "---DIVISIÓN---" << endl;
    int numerador;
    int denominador;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional = new Racional(numerador, denominador);
    cout << ">>Racional 1: " << *racional;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional2 = new Racional(numerador, denominador);
    cout << ">>Racional 2: " << *racional2 << endl;
    const Racional *division;
    division = *racional / (*racional2);
    cout << "**>>División: " << *division << endl;
}

void divisionAsigancion()
{
    int numerador;
    int denominador;
    cout << "Ingrese Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *racional = new Racional(numerador, denominador);
    cout << *racional;
}