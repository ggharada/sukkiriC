#include <stdio.h>
#include <stdbool.h>

typedef char string[1024];

int main (void)
{
    string answer;
    printf("かっこよくて最高な、C言語男子の名前は？\n");
    scanf("%s", answer);
    if (answer == "ミサキ")
    {
        printf("大正解！　見る目あるね！\n");
    }
    else
    {
        printf("残念。\n");
    }
    return 0;
}