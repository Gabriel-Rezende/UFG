#include <stdio.h>

int main(void){
    
    int a = 1, b = 0, c = 0, quantidadeTermos, contador;
    
    printf("Digite a quantidade de termos: ");
    scanf("%i", &quantidadeTermos);
    
    for(contador = 1; contador <= quantidadeTermos; contador++){
    	c += a;
    	a = b;
    	b = c;
    	
		printf("%i ", a);
  	}
}
