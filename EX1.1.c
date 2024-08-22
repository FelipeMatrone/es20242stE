#include <stdio.h>

double soma  (double n1, double n2);
double sub   (double n1, double n2);
double vezes (double n1, double n2);
double div   (double n1, double n2);

int main(){	
  double val1, val2;
  char op;
  
  printf("Digite uma operacao: \n+ adicao\n- subtracao\n* multiplicacao\n/ divisao \n ");
  scanf ("%c", &op);
  printf("Digite o primeiro numero: ");
  scanf ("%lf", &val1);
  printf(" Digite o segundo numero: ");
  scanf ("%lf", &val2);

   if(op == '+'){
	printf("A soma é: %.2f", soma(val1,val2));
 } 
   else if(op == '-'){
	printf("A subtracao e: %.2f", sub(val1,val2));
 }
   else if(op == '/'){
	printf("A divisao e: %.2f", div(val1,val2));
 } 
  else if(op == '*'){
	printf("A multiplicacao e: %.2f", vezes(val1,val2));
}
  else{
  	printf("Operacao e invalida!");
  }
 
return 0; 

}
double soma  (double n1, double n2){
	return n1 + n2; 
 }
double sub   (double n1, double n2){
	return n1-n2;
 }
double vezes (double n1, double n2){
	return n1*n2;
 } 
double div   (double n1, double n2){
	return n1/n2;
 }



