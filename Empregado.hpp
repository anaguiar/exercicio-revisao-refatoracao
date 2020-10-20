#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
using namespace std;
#include <string>

#define EXTRA 8
#define METADE 0.5

class Empregado {
	
  public:
    string nome;
    double salarioHora;  
    double salarioMes;

    Empregado(int salarioHora, string nome, float horasTrabalhadas) : salarioHora(salarioHora), nome(nome){
      salarioMes = this->pagamentoMes(horasTrabalhadas);
    };

    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > EXTRA) {
        double x = horasTrabalhadas - EXTRA;
        t += x * METADE;
      }
	  return t * salarioHora;
    };

    friend ostream & operator << (ostream &out, const Empregado &c);
	
};

#endif
