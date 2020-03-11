#include <stdio.h>

int main(void){
    
	char a, b;
	
	printf("Digite A: ");
	scanf("%c", &a);

	printf("Digite B: ");
	scanf("%c", &b);
	
	if(b == 10){
		scanf("%c", &b);
	}
	
	printf("\nValor de A: %c\nValor de B: %c\n", a, b);
}
