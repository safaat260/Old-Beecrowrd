
#include<stdio.h>
int main(){

int a,b,c,d;
float e,f,total;

scanf("%d %d %f", &a,&b,&e);
scanf("%d %d %f", &c,&d,&f);

total = (b*e) + (d*f);

printf("VALOR A PAGAR: R$ %.2f\n", total);
return 0;
}
