#include <stdio.h>

typedef char string[1024];

int main (void){
    int age = 29;
    string name = "かいとう";
    printf("私は%d歳の%sです。\n", age, name);
    return 0;
}