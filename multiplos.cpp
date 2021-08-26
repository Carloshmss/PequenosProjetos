#include <stdio.h>
int main(int argc, char const *argv[]){
    for(int i = 1; i <= 100; i++){
        if(i % 5 == 0 && i % 3 == 0){
            printf("%s\n","FooBaa");
        }else if(i % 3 == 0){
            printf("%s\n","Foo");
        }else if(i % 5 == 0){
            printf("%s\n","Baa");
        }else{
            printf("%i\n",i);
        }
    }
}