#include <iostream>
#include "fila.h"

using namespace std;

fila::fila() // construtos
{
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_itens];
}

fila::~fila() // destrutor
{
    delete[] estrutura;
}

bool fila::estavazio() // isempty
{
    return (primeiro == ultimo);
}

bool fila::estacheio() // isfull
{
    return (ultimo - primeiro == max_itens);
}

void fila::inserir(TipoItem item) // push //enqueue
{
    if (estacheio())
    {
        cout << "A fila estah cheia\n";
        cout << "Este elemanto nao pode ser inserido\n";
    }
    else
    {
        estrutura[ultimo % max_itens] = item; // % nos dá o máximo de itens
        ultimo++;
    }
}

TipoItem fila::remover() // pop // dequeue
{
    if (estavazio())
    {
        cout << "A fila estah vazia!\n";
        cout << "Nenhum elemeto foi removido!\n";
        return 0;
    }
    else
    {
        primeiro++;
        return estrutura[(primeiro - 1) % max_itens];
    }
}

void fila::imprimir() // print
{
    cout << "Fila: [ ";
    for (int i = primeiro; i < ultimo; i++)
    {
        cout << estrutura[i % max_itens] << " ";
    }
    cout << " ]\n";
}
