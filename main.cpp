#/*DESPLEGAR LOS MÚLTIPLOS DE 5, ENTRE 10 Y 50, ACOMPAÑADOS DE SU FACTORIAL Y LOGARITMO RESPECTIVO.*/
#include <iostream>
#include<math.h>
int main(int argc, char** argv) {
	
	for(int i=10; i<=50;i++){
		int factorial;
		double logaritmo;
		factorial=1;
		logaritmo=log10(i);
		factorial=factorial*i;
		if(i%5==0){
			printf("%d \n FACTORIAL=%d\nLOGARITMO=%lf\n\n", i, factorial, logaritmo );
		}
	}
	system("pause");
}
