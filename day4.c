#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
对面现在只有三张牌，且只有一张牌是红桃A，而我需要一次抽到这张红桃A才能赢得牌局。
假设游戏已经循环了364次，我一次抽到红桃A的次数是170次。
假设现在开始我必定会抽到红桃A，我还要抽多少次才能把自己的胜率提升到50% 及以上？
*/


int main()
{
    int a = 170;
    int b = 364;
    int x = 0; // 需要抽牌的次数

    while (2 * a < b)
    {
        a++;
        b++;
        x++;
    }

    printf("%d\n", x); // 输出需要抽牌的次数

    return 0;
}