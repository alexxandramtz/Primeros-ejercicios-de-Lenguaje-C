#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int n1,n2,resta;
	
	printf("Ingresa el primer numero: \n");
	scanf("%d",&n1);
	
	printf("Ingresa el segundo numero: \n");
	scanf("%d",&n2);
	
	resta = n1 - n2;
	printf("El resultado de la resta es: %d",resta);
	
	return 0;
}

