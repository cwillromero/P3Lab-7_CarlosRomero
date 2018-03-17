#include <string>
#include "Racional.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
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
void crearRacionales();
void abrirRacionales();
void Parsear(string);
vector<Racional *> racionales;
void Guardar(string);

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
        case 10:
        {
            crearRacionales();
        }
        }
    }
    return 0;
}

int menu()
{
    int opcion = 0;
    while (opcion <= 0 || opcion > 10)
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
        cout << "10) Crear Racionales" << endl;
        cout << "Ingrese una Opción: " << endl;
        cin >> opcion;
        cout << endl;
        if (opcion > 0 && opcion < 9)
        {
            if (racionales.size() < 2)
            {
                cout << "Debe Crear Al menos 2 Racionales Primero: " << endl;
                opcion = 100;
            }
        }
    }
    return opcion;
}

void suma()
{
    int pos;
    cout << "---SUMA---" << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 1: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional = racionales[pos];
    cout << ">>Racional 1: " << *racional << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 2: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional2 = racionales[pos];
    cout << ">>Racional 2: " << *racional2 << endl;
    const Racional *suma;
    suma = *racional + *racional2;
    cout << "**>>Suma: " << *suma << endl;
    stringstream salida;
    salida << *racional << " + " << *racional2 << " = " << *suma;
    string a = salida.str();

    Guardar(a);
}

void resta()
{
    int pos;
    cout << "---RESTA---" << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 1: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional = racionales[pos];
    cout << ">>Racional 1: " << *racional << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 2: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional2 = racionales[pos];
    cout << ">>Racional 2: " << *racional2 << endl;
    const Racional *resta;
    resta = *racional - *racional2;
    cout << "**>>Resta: " << *resta << endl;
    stringstream salida;
    salida << *racional << " - " << *racional2 << " = " << *resta;
    string a = salida.str();

    Guardar(a);
}

void sumaAsignacion()
{
    int pos;
    cout << "---SUMA ASIGNACIÓN---" << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 1: ";
        cin >> pos;
    }
    int r1 = pos;
    cout << endl;
    Racional *racional = racionales[pos];
    cout << ">>Racional 1: " << *racional << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 2: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional2 = racionales[pos];
    cout << ">>Racional 2: " << *racional2 << endl;
    *racional += *racional2;
    racionales[r1] = new Racional(racional->getNumerador(), racional->getDenominador());
    cout << "**>>Suma Asignación: " << *racional << endl;
    stringstream salida;
    salida << *racional << " += " << *racional2 << " = " << *racional;
    string a = salida.str();

    Guardar(a);
}

void restaAsignacion()
{
    int pos;
    cout << "---RESTA ASIGNACIÓN---" << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 1: ";
        cin >> pos;
    }
    int r1 = pos;
    cout << endl;
    Racional *racional = racionales[pos];
    cout << ">>Racional 1: " << *racional << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 2: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional2 = racionales[pos];
    cout << ">>Racional 2: " << *racional2 << endl;
    *racional -= *racional2;
    racionales[r1] = new Racional(racional->getNumerador(), racional->getDenominador());
    cout << "**>>Resta Asignación: " << *racional << endl;
    stringstream salida;
    salida << *racional << " -= " << *racional2 << " = " << *racional;
    string a = salida.str();

    Guardar(a);
}

void multiplicacion()
{
    int pos;
    cout << "---MULTIPLICACIÓN---" << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 1: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional = racionales[pos];
    cout << ">>Racional 1: " << *racional << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 2: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional2 = racionales[pos];
    cout << ">>Racional 2: " << *racional2 << endl;
    const Racional *multiplicacion;
    multiplicacion = *racional * (*racional2);
    cout << "**>>Multiplicación: " << *multiplicacion << endl;
    stringstream salida;
    salida << *racional << " * " << *racional2 << " = " << *multiplicacion;
    string a = salida.str();

    Guardar(a);
}

void multiplicacionAsignacion()
{
    cout << "---MULTIPLICACIÓN ASIGNACIÓN---" << endl;
    int pos;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 1: ";
        cin >> pos;
    }
    int r1 = pos;
    cout << endl;
    Racional *racional = racionales[pos];
    cout << ">>Racional 1: " << *racional << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 2: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional2 = racionales[pos];
    cout << ">>Racional 2: " << *racional2 << endl;
    *racional *= *racional2;
    racionales[r1] = new Racional(racional->getNumerador(), racional->getDenominador());
    cout << "**>>Multiplicación Asignación: " << *racional << endl;
    stringstream salida;
    salida << *racional << " *= " << *racional2 << " = " << *racional;
    string a = salida.str();

    Guardar(a);
}

void division()
{
    int pos;
    cout << "---DIVISIÓN---" << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 1: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional = racionales[pos];
    cout << ">>Racional 1: " << *racional << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 2: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional2 = racionales[pos];
    cout << ">>Racional 2: " << *racional2 << endl;
    const Racional *division;
    division = *racional / (*racional2);
    cout << "**>>División: " << *division << endl;
    stringstream salida;
    salida << *racional << " / " << *racional2 << " = " << *division;
    string a = salida.str();

    Guardar(a);
}

void divisionAsigancion()
{
    int pos;
    cout << "---DIVISIÓN ASIGNACIÓN---" << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 1: ";
        cin >> pos;
    }
    int r1 = pos;
    cout << endl;
    Racional *racional = racionales[pos];
    cout << ">>Racional 1: " << *racional << endl;
    pos = racionales.size() + 1;
    while (pos < 0 || pos >= racionales.size())
    {
        for (int i = 0; i < racionales.size(); i++)
        {
            cout << i << ") " << *racionales[i] << endl;
        }
        cout << "Elija el Racional 2: ";
        cin >> pos;
    }
    cout << endl;
    Racional *racional2 = racionales[pos];
    cout << ">>Racional 2: " << *racional2 << endl;
    *racional /= *racional2;
    racionales[r1] = new Racional(racional->getNumerador(), racional->getDenominador());
    cout << "**>>División Asignación: " << *racional << endl;
    stringstream salida;
    salida << *racional << " /= " << *racional2 << " = " << *racional;
    string a = salida.str();

    Guardar(a);
}

void crearRacionales()
{
    int denominador;
    int numerador;
    cout << "Ingrese el Numerador: ";
    cin >> numerador;
    cout << endl
         << "Ingrese el Denominador: ";
    cin >> denominador;
    cout << endl;
    Racional *temp = new Racional(numerador, denominador);
    racionales.push_back(temp);
}

void abrirRacionales()
{
    ifstream archivo("Log.txt");
    if (archivo.is_open())
    {
        while (!archivo.eof())
        {
            string linea;
            getline(archivo, linea);
            if (linea.size() < 1)
            {
                break;
            }
            //log.push_back(linea);
        }
        archivo.close();
    }
}

void Parsear(string linea)
{
    int inicio = 0;
    vector<string> elementos;
    for (int i = 0; i < linea.size(); i++)
    {
        if (linea.at(i) == '/' || linea.at(i) == ' ')
        {
            string elemento = "";
            for (int j = inicio; j < i; j++)
            {
                if (linea.at(j) != '/')
                {
                    elemento = elemento + linea.at(j);
                }
            }
            elementos.push_back(elemento);
            inicio = i;
        }
    }
    int num = atoi(elementos[0].c_str());
    int den = atoi(elementos[1].c_str());
    Racional *ra = new Racional(num, den);
    racionales.push_back(ra);
}

void Guardar(string linea)
{
    string file = "Log.txt";
    ofstream ficheroSalida(file.c_str(), ios::app);
    ficheroSalida << linea;
    ficheroSalida << "\n";
}