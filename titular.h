#pragma once
#include <string>
#include "cpf.h"

class Titular
{
public:
    Cpf cpf;
private:
    std::string nome;
public:
    Titular(Cpf cpf, std::string nome);
private:
    void verificaTamanhoDoNome();
};