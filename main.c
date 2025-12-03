#include <stdio.h>
#include <stdlib.h>

void toUpper(char s[]);
int countAlpha(char s[]);
int countDigit(char s[]);
int countOther(char s[]);

int main(void){
	char str[50];
	printf("块琿﹃:");
	fgets(str, sizeof(str), stdin);
	int en_num = countAlpha(str);    
    int nu_num = countDigit(str);
    int ot_num = countOther(str);
	toUpper(str);
	printf("锣Θ糶:%s\n",str);
	printf("璣ゅダ计秖:%d\n",en_num);
	printf("计じ计秖:%d\n",nu_num);
	printf("ㄤじ计秖:%d\n",ot_num);
	
	system("pause");
	return 0;	
}
void toUpper(char s[]){
	int i=0;
	while(s[i]!='\0'){
		if(s[i]>=97&&s[i]<=122){
			s[i]=s[i]-32;
		}
		i++;
	}
}
int countAlpha(char s[]){
	int i=0;
	int en_num=0;
	while(s[i]!='\0'){
		if((s[i]>=97&&s[i]<=122)||(s[i]>=65&&s[i]<=90)){
			en_num++;
		}
		i++;
	}
	return en_num;
}
int countDigit(char s[]){
	int i=0;
	int nu_num=0;
	while(s[i]!='\0'){
		if(s[i]>=48&&s[i]<=57){
			nu_num++;
		}
	i++;
	}
	return nu_num;
}
int countOther(char s[]){
	int i=0;
	int ot_num=0;
	while(s[i]!='\0'){
		if(!((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= '0' && s[i] <= '9'))){
			ot_num++;
		}
	i++;
	}
	return ot_num;
}


