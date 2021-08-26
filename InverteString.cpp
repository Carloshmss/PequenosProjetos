#include <iostream>
using namespace std;

void inverter(){
    string palavra;

    //Primeiramente, pegamos a palavra que o usuário deseja inverter.
    cout << "Digite a palavra que deseja inverter:";
    cin >> palavra;

    int tamanho = palavra.length();

    //Logo após, o código ira adicionar a palavra invertida depois da palavra original.
    for(int i = tamanho-1; i >= 0;i--){
        palavra += palavra[i];
    }

    //Por fim, apagamos a palavra original, sobrando somente a invertida.
    palavra.erase(0,tamanho);

    cout << "Palavra invertida: " << palavra<<"\n";
}

int main(int argc, char const *argv[])
{   
    //Aqui temos uma função while(true) para manter o código rodando até que ele seja parado a força.    
    while(true){
        inverter();
    }
    return 0;
}