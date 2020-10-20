#include "Engenheiro.cpp"
#include "Vendedor.cpp"

#define N 3

float horasTrabalhadasE[N] = {9.5, 8, 8};

string nomesEngenheiros[N] = {"Joao Snow",
                              "Daniela Targaryen",
                              "Bruno Stark"};

int salarioHoraEng[N] = {35,
                         30,
                         30};
int projetos[N] = {3,
                   1,
                   2};

string nomesV[N] = {"Tonho Lannister",
                    "Jose Mormont",
                    "Sonia Stark"};

int salarioHoraV[N] = {20,
                       25,
                       30};

int quotaMensal[N] = {5000, 3000, 4000};

int horasTrabalhadasV[N] = {6, 8, 8};

int main()
{  
  int i;
  Engenheiro *aux1;
  aux1 = new Engenheiro(nomesEngenheiros[0], salarioHoraEng[0], projetos[0], horasTrabalhadasE[0]);
  for (i = 1; i <= N; i++)
  {
    cout << *aux1 << endl;
    if (i < N)
    {
      aux1->setNewEngenheiro(nomesEngenheiros[i], salarioHoraEng[i], projetos[i], horasTrabalhadasE[i]);
    }
    else
    {
      delete aux1;
    }
  };

  Vendedor *aux2;
  aux2 = new Vendedor(nomesV[0], salarioHoraV[0], quotaMensal[0], horasTrabalhadasV[0]);
  for (i = 1; i <= N; i++)
  {
    if (i < N)
    {
      cout << *aux2 << endl;
      aux2->setNewVendedor(nomesV[i], salarioHoraV[i], quotaMensal[i], horasTrabalhadasV[i]);
    }
    else
    {
      cout << *aux2;
      delete aux2;
    }
  };

  return 0;
}
