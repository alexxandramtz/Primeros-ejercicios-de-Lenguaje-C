#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numero;
	
	numero = 999;
	
	if(numero % 2 ==0){
		printf("el numero es par: %d",numero);
	}
	else if (numero % 2 != 0){
		printf ("el numero es impar: %d",numero);
		
	}
	return 0;
}

