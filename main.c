#include <stdio.h>
#include <string.h>

int check_password(char correct[], char input[]);

int main(void) {
    char password[7] = "a1b2c3";
    char input[7];
    int chance = 3;

    //輸入密碼
    while (chance > 0) {
        printf("請輸入 6 位密碼: ");
        scanf("%6s", input);

        //正確輸出正確,錯了次數-1
        if (check_password(password, input)) {
            printf("密碼正確！\n");
            return 0;
        } else {
            chance--;
            printf("密碼錯誤  剩餘次數: %d\n", chance);
        }
    }

    printf("輸入三次錯誤，無法在輸入。\n");
    return 0;
}

//判斷密碼是否正確,對的回傳1錯了回傳0
int check_password(char correct[], char input[]) {
    if (strcmp(correct, input) == 0){
        return 1;
    }
    else{
        return 0;
    }

}
