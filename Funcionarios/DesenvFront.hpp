#ifndef DESENVOLVEDOR_FRONTEND
#define DESENVOLVEDOR_FRONTEND

#include "..//Core/Funcionario.hpp/"
#include "..//Core//Acesso.hpp"

class Desenvolvedor_Frontend:public Funcionario, public Acesso{
    public:
        Desenvolvedor_Frontend(string id, string cpf, string nome);
        ~Desenvolvedor_Frontend();
        int setMod(int modificador);
};

#endif