// pillha = stack
typedef int TipoItem;
const int max_itens = 100;

class pilha
{
private:
    int tamanho;
    TipoItem *estrutura; // estrutura é o nome do vetor

public:
    pilha();                     // stack // a função construtora tem que ter o mesmo nome da classe
    ~pilha();                    // ~stack // esta é a função destrutora
    bool estacheia();            // isfull // verifica se a pilha está cheia
    bool estavazia();            // isempty // verifica se a pilha está vazia
    void inserir(TipoItem item); // push=inserir
    TipoItem remover();          // pop=remover
    void imprimir();             // print=imprimir
    int qualtamanho();           // leght=tamanho
};
