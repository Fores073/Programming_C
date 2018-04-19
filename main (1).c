/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
// @Fores

int main (int argc, char** argv){
//	int a, b, c;
//	printf("Digite el primer numero\n");
//	scanf("%i",&a);
//	printf("Digite el segundo numero\n");
//	scanf("%i",&b);
//	c = a + b ;
//	printf("la suma de %i mas %i es %i\n",a,b,c);
//	printf("----------------------Condicional If--------------------------\n");
//	if(a<b){
//		printf("%i es menor que %i",a,b);
//	}else if(a>b) {
//		printf("%i es menor que %i",b,a);
//	}else if (a=b){
//		printf("%i es igual que %i",a,b);
//	}
//	printf("\n----------------------WHILE--------------------------\n");
//	int i = 0;
//	while(i<=c){
//		printf("Estoy contando de 0 a %i, voy en %i\n",c,i);
//		i=i+1;
//	}
//    printf("\n----------------------DO WHILE--------------------------\n");
//    do{
//    	printf("Estoy contando de 0 a %i, voy en %i\n",c,i);
//    	i=i+1;
//	}while(i<=c);
//    printf("\n----------------------FOR--------------------------\n");
//    for(i=0;i<=c;i++){
//    printf("Estoy contando de 0 a %i, voy en %i\n",c,i);	
//	}
//-------------------------------------------------------------------------------------------
// ejercicios
int n,c=1,i;
	printf("Digite el primer numero\n");
	scanf("%i",&n);
// ---------- 1 ----------
//  while(c<n){
//	 c=c+1;
//	 i=c+i;
//	}
//	printf("la sumatoria de 0 hasta %i es %i ",n,i);
    
// ------------- 2 ---------------    
    for(i=1;i<=n;i++){
        c=c*i;
    }
  printf("el resultado es : %i",c);
return 0;
	}