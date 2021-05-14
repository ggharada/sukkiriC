#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main (void){
    string name;
    printf("あなたの名前を入力してください\n");
    scanf("%s", name);

    string agestr;
    printf("あなたの年齢を入力してください\n");
    scanf("%s", agestr);

    int age = atoi(agestr);
    printf("ようこそ、%d歳の%sさん。\n", age, name);
    return 0;
}