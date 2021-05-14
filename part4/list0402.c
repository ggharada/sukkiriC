#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool doorclosed = true;
    while (doorclosed == true)
    {
        printf("ノックする\n");
        printf("1分待つ\n");
    }
    return 0;
}