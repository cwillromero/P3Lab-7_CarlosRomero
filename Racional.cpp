#include "Racional.h"
#include <iostream>
#include <string>
using namespace std;

Racional::Racional(int numerador, int denominador)
{
    this->numerador = numerador;
    this->denominador = denominador;
    Simplificar();
}

Racional::Racional()
{
    numerador = 5;
    denominador = 10;
    Simplificar();
}

void Racional::Simplificar()
{

    int mayor;
    if (numerador < denominador)
    {
        mayor = denominador;
    }
    else
    {
        mayor = numerador;
    }
    for (int i = 1; i <= mayor; i++)
    {
        if (numerador % i == 0 && denominador % i == 0)
        {
            numerador = numerador / i;
            denominador = denominador / i;
        }
    }
}

int Racional::getDenominador() const
{
    return denominador;
}

int Racional::getNumerador() const
{
    return numerador;
}

void Racional::setDenominador(int denominador)
{
    this->denominador = denominador;
}

void Racional::setNumerador(int numerador)
{
    this->numerador = numerador;
}

ostream &operator<<(ostream &out, const Racional &racional)
{
    out << racional.numerador << "/ " << racional.denominador;
    return out;
}

const Racional *Racional::operator+(const Racional &Sumando) const
{
    int N_numerador = (this->numerador * Sumando.getDenominador()) + (this->denominador * Sumando.getNumerador());
    int N_denominador = this->denominador * Sumando.getDenominador();
    Racional *racional = new Racional(N_numerador, N_denominador);
    return racional;
}

const Racional *Racional::operator-(const Racional &Restando) const
{
    int N_numerador = (this->numerador * Restando.getDenominador()) - (this->denominador * Restando.getNumerador());
    int N_denominador = this->denominador * Restando.getDenominador();
    Racional *racional = new Racional(N_numerador, N_denominador);
    return racional;
}

const Racional *Racional::operator*(const Racional &Multiplicando) const
{
    int N_numerador = this->numerador * Multiplicando.getNumerador();
    int N_denominador = this->denominador * Multiplicando.getDenominador();
    Racional *racional = new Racional(N_numerador, N_denominador);
    return racional;
}

const Racional *Racional::operator/(const Racional &Dividendo) const
{
    int N_numerador = this->numerador * Dividendo.getDenominador();
    int N_denominador = this->denominador * Dividendo.getNumerador();
    Racional *racional = new Racional(N_numerador, N_denominador);
    return racional;
}

void Racional::operator*=(const Racional &multi)
{
    int N_numerador = this->numerador * multi.getNumerador();
    int N_denominador = this->denominador * multi.getDenominador();
    this->numerador = N_numerador;
    this->denominador = N_denominador;
    Simplificar();
}

void Racional::operator+=(const Racional &suma)
{
    int N_numerador = (this->numerador * suma.getDenominador()) + (this->denominador * suma.getNumerador());
    int N_denominador = this->denominador * suma.getDenominador();
    this->numerador = N_numerador;
    this->denominador = N_denominador;
    Simplificar();
}

void Racional::operator-=(const Racional &resta)
{
    int N_numerador = (this->numerador * resta.getDenominador()) - (this->denominador * resta.getNumerador());
    int N_denominador = this->denominador * resta.getDenominador();
    this->numerador = N_numerador;
    this->denominador = N_denominador;
    Simplificar();
}

void Racional::operator/=(const Racional &divi)
{
    int N_numerador = this->numerador * divi.getDenominador();
    int N_denominador = this->denominador * divi.getNumerador();
    this->numerador = N_numerador;
    this->denominador = N_denominador;
    Simplificar();
}

Racional::~Racional()
{
}