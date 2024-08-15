#include <stdio.h>
int divisivel(int num, int div)
{	
	if(num % div == 0){
    return 1;}
	else{
     return 0;	}
     
}
int main()
{
int valor1, valor2;
    printf("Digite 2 numero: \n");
	 scanf("%d%d", &valor1, &valor2);
    if(divisivel(valor1,valor2)){
     printf("%d divisivel por %d", valor1, valor2);  	
	}
	else{
	 printf("%d Nao e divisivel por %d", valor1, valor2);	
	}


return 0;  
 }	

