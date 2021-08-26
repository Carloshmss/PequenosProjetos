#include <iostream>
using namespace std;

std::string ConcatERemove(std::string s,std::string t,int k){
    if(k >= s.length() + t.length()){
        return "Sim";
    }

    int tamanho = s.length();
    int x = 0;
    
    for(int i = 0; i < tamanho;i++){
        if(s[i] != t[i]){
            break;
        }
        x++;
    }
    int minimo = (s.length() - x) + (t.length() - x);

    if(k < minimo){
        return "Nao";
    }

    if(minimo % 2 == 0){
        if(k % 2 == 0){
            return "Sim";
        }else{
            return "Nao";
        }
    }else{
        if(k % 2 == 1){
            return "Sim";
        }else{
            return "Nao";
        }
    }
}

int main(int argc, char const *argv[])
{
    cout << ConcatERemove("ashley","ash",5);
    return 0;
}