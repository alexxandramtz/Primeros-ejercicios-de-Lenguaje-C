#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n1,n2,multiplicacion;
	
	printf("ingresa el primer numero entero: \n");
	scanf("%d",&n1);
	
	printf("ingresa el segundo numero entero: \n");
	scanf("%d",&n2);
	
	multiplicacion = n1 * n2;
	printf("el resultado de la suma es: %d",multiplicacion);
	
	return 0;
}

