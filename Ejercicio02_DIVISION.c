#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float n1,n2,division;
	
	printf("Ingresa el primer numero: \n");
	scanf("%f",&n1);
	
	printf("Ingresa el segundo numero: \n");
	scanf("%f",&n2);
	
	division = n1 / n2;
	printf("El resultado de la division es: %f",division);
	
	return 0;
}

