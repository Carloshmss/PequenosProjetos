#include <iostream>
using namespace std;

void fibonacci()
{
    int termo;
    //Primeiramente, pegamos o número do termo que o usuário deseja encontar:
    cout << "Insira o numero do termo que deseja encontrar:";
    cin >> termo;

    //Depois, verificamos se esse termo é válido (ele precisa ser maior que zero).
    if (termo == 1)
    {
        //Aqui, temos uma saída para caso o termo seja igual à 1.
        cout << "O numero correspondente a esse termo termo: 0\n";
    }
    else if (termo < 1)
    {
        //Caso o usuário tenha colocado um número negativo, irá receber um aviso, e o código irá rodar novamente.
        cout << "Insira um termo maior que zero.\n";
    }
    else
    {
        int x = 0;
        int y = 1;
        int y1;

        //depois, o y irá receber o termo atual, y1 o antigo y, e o x será o termo anterior (y1).
        for (int i = 2; i < termo; i++)
        {
            y1 = y;
            y = x + y;
            x = y1;
        }
        cout << "O numero correspondente a esse termo termo: " << y << "\n";
    }
}

int main(int argc, char const *argv[])
{
    //Aqui temos uma função while(true) para manter o código rodando até que ele seja parado a força.
    while (true)
    {
        fibonacci();
    }
    return 0;
}