#include <stdio.h>
#include <stdlib.h>
void input(int a[]);
int find_max(int a[]);
int find_min(int a[]);
void sort(int a[]);
void print_array(int a[]);

int main(void){
    int a[10];
    input(a);

    int max=find_max(a);
    int min=find_min(a);

    sort(a);

    printf("最大值:%d\n",max);
    printf("最小值:%d\n",min);

    printf("由小到大排列: ");
    print_array(a);

    system("pause");
    return 0;
}
void input(int a[]){
    printf("請輸入10個整數:");
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
}
int find_max(int a[]){
    int max=a[0];
    int i;
    for(i=0;i<10;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int find_min(int a[]){
    int min=a[0];
    int i;
    for(i=0;i<10;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
void sort(int a[]){
    int i ,n;
    for(i=0;i<9;i++){
        for(n=i+1;n<10;n++){
            if(a[i]>a[n]){
                int temp=a[i];
                a[i]=a[n];
                a[n]=temp;
            }
        }
    }
}
void print_array(int a[]){
    int i;
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
        
    }
    printf("\n");
}