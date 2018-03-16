#include <string>
#include <iostream>

using namespace std;

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional
{
private:
  int numerador;
  int denominador;

public:
  Racional(int, int);
  Racional();
  int getNumerador() const;
  void setNumerador(int);
  int getDenominador() const;
  void setDenominador(int);
  void Simplificar();
  ~Racional();
  //Impresion
  friend ostream &operator<<(ostream &, const Racional &);
  //Metodos
  const Racional *operator+(const Racional &) const;
  const Racional *operator-(const Racional &) const;
  const Racional *operator*(const Racional &)const;
  const Racional *operator/(const Racional &) const;
  void operator+=(const Racional &);
  void operator-=(const Racional &);
  void operator*=(const Racional &);
  void operator/=(const Racional &);
};
#endif
