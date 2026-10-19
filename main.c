#include <stdio.h>

int main(void) {
    char c;

    printf("1文字を入力してください: ");
    scanf("%c", &c);

    printf("入力された文字は「%c」です。\n", c);

    return 0;
}
