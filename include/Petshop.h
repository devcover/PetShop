#ifndef PETSHOP_H_INCLUDED
#define PETSHOP_H_INCLUDED

#include "Animal.h"
#include "Pessoa.h"


class Petshop
{

public:
    std::vector<Cliente> clientes;
	std::vector<Funcionario> funcionarios;
	std::vector<Veterinario> veterionarios;
    int id;
    string endereco;
    string cnpj;



public:
    Petshop();
	~Petshop();

	//cadastrar funcionário
	void cadastrar_clientes(Cliente m_cliente);
	void cadastrar_funcionarios(Funcionario m_funcionario);
	void mostrar_funcionarios();
	void mostrar_clientes();

};

#endif // PETSHOP_H_INCLUDED
