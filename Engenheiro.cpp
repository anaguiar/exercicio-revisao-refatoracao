#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado
{

public:
  Engenheiro(std::string nome, int salarioHora, int projetos, float horasTrabalhadas) : Empregado(salarioHora, nome, horasTrabalhadas), projetos(projetos) {};
  int projetos;

  void setNewEngenheiro(string nome, int salarioHora, int projetos, float horasTrabalhadas)
  {
    this->nome = nome;
    this->salarioHora = salarioHora;
    this->projetos = projetos;
    this->salarioMes = this->pagamentoMes(horasTrabalhadas);
  };

  friend ostream &operator<<(ostream &out, const Engenheiro &p)
  {
    out << "Nome: " << p.nome << endl;
    out << "Salario Mes: " << p.salarioMes << endl;
    out << "Projetos: " << p.projetos << endl;
    return out;
  };
};
