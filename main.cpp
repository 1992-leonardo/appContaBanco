#include <iostream>
#include <string>
#include "conta.h"
#include "titular.h"
#include "cpf.h"
using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}
int main()
{
    Titular titular(Cpf("123.456.789-10"), "Leonardo ");
    Conta umaConta("123456", titular);
    umaConta.depositar(500);
    umaConta.sacar(200);
    ExibeSaldo(umaConta);
    Titular outro(Cpf("098.765.432-10"), "Possan da Silva");
    Conta umaOutraConta("654321", titular);
    umaOutraConta.depositar(300);
    umaOutraConta.sacar(50);
    ExibeSaldo(umaOutraConta);
    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;
    return 0;
}