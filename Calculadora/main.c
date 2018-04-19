	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int main(int argc, char *argv[]) {
	int menu;
	float a, b, r;	
	printf("Bienvenido \n");
	printf(" 1 Suma\n");
	printf(" 2 Resta\n");
	printf(" 3 Multiplicacion\n");
	printf(" 4 Division\n");
	printf(" 5 Potencia\n");
	printf(" 6 Porcentaje\n");
	printf(" 7 Logaritmo\n");
	printf(" 8 Seno\n");
	printf(" 9 Coseno\n");
	printf(" 10 Tangente\n");
	printf(" 11 Raiz Cuadrada\n");	
	printf("Digite el numero de la operacion que desea realizar : ");scanf("%i",&menu);
	switch(menu){
		case 1:
			system("cls");
			printf("Digite el primer valor : ");scanf("%f",&a);	
			printf("Digite el segundo valor : ");scanf("%f",&b);
			r = a + b;
			printf("El resultado es : %f",r);
		    break;			
		case 2:
		    system("cls");
			printf("Digite el primer valor : ");scanf("%f",&a);	
			printf("Digite el segundo valor : ");scanf("%f",&b);
			r = a - b;
			printf("El resultado es : %f",r);
			break;
		case 3:
			system("cls");
			printf("Digite el primer valor : ");scanf("%f",&a);	
			printf("Digite el segundo valor : ");scanf("%f",&b);
			r = a * b;
			printf("El resultado es : %f",r);
			break;
		case 4:
			system("cls");
			printf("Digite el primer valor : ");scanf("%f",&a);	
			printf("Digite el segundo valor : ");scanf("%f",&b);
			if (b=0){
			printf("¡¡ERROR!! NO SE PUEDE DIVIDIR EN 0");
			break;
			}else {
			r = a / b;
			printf("El resultado es : %f",r);
			break;
			}
		case 5:
			system("cls");
			printf("Digite el valor de la base : ");scanf("%f",&a);	
			printf("Digite el valor de la potencia : ");scanf("%f",&b);
			r = pow(a,b);
			printf("El resultado es : %f",r);
			break;
		case 6:
			system("cls");
			printf("Digite un numero : ");scanf("%f",&a);	
			printf("Digite el valor del porcentaje a sacar : ");scanf("%f",&b);
			r = (a*b)/100;
			printf("El resultado es : %f",r);
			break;
		case 7:
			system("cls");
			printf("Digite el valor del logaritmo : ");scanf("%f",&a);
			r = log10(a);
		    printf("El resultado es : %f",r);
			break;	
		case 8:
			system("cls");
			printf("Digite el valor del angulo : ");scanf("%f",&a);
			r = sin(a);
		    printf("El resultado es : %f",r);
			break;
		case 9:
			system("cls");
			printf("Digite el valor del angulo : ");scanf("%f",&a);
			r = cos(a);
		    printf("El resultado es : %f",r);
			break;
		case 10:
			system("cls");
			printf("Digite el valor del angulo : ");scanf("%f",&a);
			r = tan(a);
		    printf("El resultado es : %f",r);
			break;	
		case 11:
			system("cls");
			printf("Digite el valor de la raiz : ");scanf("%f",&a);
			r = sqrt(a);
		    printf("El resultado es : %f",r);
			break;	
		default :
			printf("Usted digito erroneamente");
			break;
   }
    
	int menu2;
	printf("\n Por favor digite: \n");
	printf("0 Finalizar           1 Memoria \n");scanf("%i",&menu2);

	if (menu2 = '0'){
		system("cls");
		printf("Gracias vuelva pronto");
	}else{
		printf("Digite el numero de la operacion que desea realizar : ");scanf("%i",&menu);
	switch(menu){
		case 1:
			system("cls");
			printf("Digite el segundo valor : ");scanf("%f",&b);
			r = r + b;
			printf("El resultado es : %f",r);
		    break;			
		case 2:
		    system("cls");
			printf("Digite el segundo valor : ");scanf("%f",&b);
			r = r - b;
			printf("El resultado es : %f",r);
			break;
		case 3:
			system("cls");
			printf("Digite el segundo valor : ");scanf("%f",&b);
			r = r * b;
			printf("El resultado es : %f",r);
			break;
		case 4:
			system("cls");
			printf("Digite el segundo valor : ");scanf("%f",&b);
			if (b=0){
			printf("¡¡ERROR!! NO SE PUEDE DIVIDIR EN 0");
			break;
			}else {
			r = r / b;
			printf("El resultado es : %f",r);
			break;
			}
		case 5:
			system("cls");
			printf("Digite el valor de la potencia : ");scanf("%f",&b);
			r = pow(r,b);
			printf("El resultado es : %f",r);
			break;
		case 6:
			system("cls");
			printf("Digite el valor del porcentaje a sacar : ");scanf("%f",&b);
			r = (r*b)/100;
			printf("El resultado es : %f",r);
			break;
		case 7:
			system("cls");
			r = log10(r);
		    printf("El resultado es : %f",r);
			break;	
		case 8:
			system("cls");
			r = sin(r);
		    printf("El resultado es : %f",r);
			break;
		case 9:
			system("cls");
			r = cos(r);
		    printf("El resultado es : %f",r);
			break;
		case 10:
			system("cls");
			r = tan(r);
		    printf("El resultado es : %f",r);
			break;	
		case 11:
			system("cls");
			r = sqrt(r);
		    printf("El resultado es : %f",r);
			break;	
   }
		}
		return 0;
}
