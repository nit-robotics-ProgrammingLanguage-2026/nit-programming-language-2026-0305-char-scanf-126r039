#include <stdio.h>

int main(void) {
    /* 課題0305: ここに自分で必要なプログラムを書きなさい */
    printf("1文字入力してください: ");
    scanf(" %c", &c);   // char型を1文字読み取る（前の空白は改行対策）
    printf("入力された文字は『%c』です。\n", c);


    return 0;
}
