#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n1,n2,n3;
	n1=0;
	n2=0;
	n3=0;
	if (n1 > n2 && n1 > n3){
		printf("el numero 1 es mayor que numero 2 y numero 3\n");
	}
	   else if(n2 > n1 && n2 > n3){
			printf("el numero 2 es mayor que numero 1 y numero 3\n");
			
		}
	   else if(n3 > n1 && n3 > n2){
		   printf("el numero 3 es mayor que numero 1 y numero 2\n");
		   
	    }
	   else if(n1==0 && n2==0 && n3==0){
		   printf("Los tres numeros son iguales y nulos \n"); 
	   }
	   else if(n1 == n2 && n2 == n3 ){
		   printf("Los tres numeros son iguales \n");
		}
	   
	   
    
	
	return 0;
}

