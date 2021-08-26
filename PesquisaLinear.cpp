#include <iostream>
using namespace std;

int pesquisa_linear(int vetor[], int tamanho, int chave)
{
    //Aqui fazemos uma busca pela chave dentro do vetor, retornando o indíce da mesma.
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == chave)
        {
            return i;
        }
    }
    //caso essa chave não seja encontrada, retornamos o valor -1.
    return -1;
}

void trocarElementos(int vetor[], int tamanho, int elemento, int elementoNovo)
{
    //Essa função serve para trocar um elemento específico de um vetor por um novo elemento.
    int index = pesquisa_linear(vetor, tamanho, elemento);
    vetor[index] = elementoNovo;
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << "\n";
    }
}

int main(int argc, char const *argv[])
{
    int vetor[6] = {1, 2, 3, 4, 5, 6};
    trocarElementos(vetor, 6, 5, 10);
    return 0;
}