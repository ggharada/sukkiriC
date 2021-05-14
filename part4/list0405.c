#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char string[1024];

int main (void)
{
    string answerNo;
    printf("かっこよくて最高な、C言語男子の名前は？\n");
    printf("1：ミナト　2：ミサキ　3：ツバサ　4：ミサエ\n");
    scanf("%s", answerNo);
    int n = atoi(answerNo);
    if (n == 2)
    {
        printf("大正解！　見る目あるね！\n");
    }
    else
    {
        printf("残念。\n");
    }
    return 0;
}