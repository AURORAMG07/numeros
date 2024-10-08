#include <stdio.h>
void main (){
int n;


do{
printf("Introduix un número: ");
scanf("%d",&n);
}while((n<1)||(n>5));

if(n == 1) printf("U\n");
if(n == 2) printf("dos\n");
if(n == 3) printf("tres\n");
if(n == 4) printf("quatre\n");
if(n == 5) printf("cinc\n");
return;
}
