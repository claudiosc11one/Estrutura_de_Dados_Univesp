#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha() // stack // a função construtora tem que ter o mesmo nome da classe
{
    tamanho = 0; // no início a pilha não tem nenhum elemento, então é zero
    estrutura = new TipoItem[max_itens];
}

pilha::~pilha() // ~stack // esta é a função destrutora
{
    delete[] estrutura;
}

bool pilha::estacheia() // isfull // verifica se a pilha está cheia
{
    return (tamanho == max_itens);
}

bool pilha::estavazia() // isempty // verifica se a pilha está vazia
{
    return (tamanho == 0); // se apilha está vazia => tamanho é 0
}

void pilha::inserir(TipoItem item) // push=inserir
{
    if (estacheia())
    {
        cout << "A pilha estah cheia! \n";
        cout << "Nao eh possivel este elemento!\n";
    }
    else
    {
        estrutura[tamanho] = item;
        tamanho++;
    }
}

TipoItem pilha::remover() // pop=remover
{
    if (estavazia())
    {
        cout << "A pilha estah vazia!"; // throw
        cout << "Nao tem elemento para ser removido!\n";
        return 0;
    }
    else
    {
        tamanho--;
        return estrutura[tamanho];
    }
}

void pilha::imprimir() // print=imprimir
{
    cout << "Pilha: [ ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << estrutura[i] << " ";
    }
    cout << "]\n";
}

int pilha::qualtamanho() // leght=tamanho
{
    return tamanho;
}
