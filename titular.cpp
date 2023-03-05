#include "titular.h"
#include <iostream>

Titular::Titular(Cpf cpf, std::string nome): cpf(cpf), nome(nome)
{
    verificaTamanhoDoNome();
}
void Titular::verificaTamanhoDoNome()
{
    if (nome.size() < 5) {
        std::cout << "App do LP" << std::endl;
        exit(1);
    }
}