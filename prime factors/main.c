#include <stdio.h>
#include <stdlib.h>
void a (int a);
int main(void) {
    system("chcp 65001");
    int input;
    printf("請輸入一個整數:");
    scanf("%d",&input);
    a(input);
    system("pause");
    return 0;
}
void a (int a) {
    int i;
    int o=1;
    for (i = 2; i < a; i++) {
        if (a%i ==0) {
            o=0;
            printf("這不是質數");
            break;
        }
    }
    if (o) {
        printf("這是是質數");
        return;
    }
    printf("\n因數: ");
    int temp =a;
    for (int i = 2; i <temp; i++) {
        if (temp%i==0){
            printf("%d ",i);
        }
    }
    printf("\n");
}