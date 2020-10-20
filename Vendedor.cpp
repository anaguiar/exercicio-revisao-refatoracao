#include <string>
#include "Empregado.hpp"
#define MESES 12
class Vendedor : public Empregado
{

public:
	int quotaVendas;

	Vendedor(std::string nome, int salarioHora, int quotaMensal, float horasTrabalhadas) : Empregado(salarioHora, nome, horasTrabalhadas)
	{
		quotaVendas = quotaTotalAnual(quotaMensal);
	};

	void setNewVendedor(string nome, int salarioHora, int quotaMensal, float horasTrabalhadas)
	{
		this->nome = nome;
		this->salarioHora = salarioHora;
		this->quotaVendas = this->quotaTotalAnual(quotaMensal);
		this->salarioMes = this->pagamentoMes(horasTrabalhadas);
	};

	double quotaTotalAnual(int quotaMensal)
	{
		return quotaMensal * MESES;
	};

friend ostream &operator<<(ostream &out, const Vendedor &p)
  {
    out << "Nome: " << p.nome << endl;
    out << "Salario Mes: " << p.salarioMes << endl;
    out << "Quota Vendas: " << p.quotaVendas << endl;
    return out;
  };
};
