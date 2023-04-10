#include<stdio.h>
#include<ctime>
#include<cstdlib>
/*function to generate and return random numbers*/

int getRandom(){
	
	static int r[10];
	int i;
	
	/*set the seed*/
	srand((unsigned)time( NULL ));//se debe referenciar la libreria "cstdlib" y "ctime" para ocupar esta funcion 
	
	for(i=0;i<10;i++){
		r[i]=rand();
		printf("r[%d]=%d\n",i,r[i]);
	}
	return r[10]; //la variable no estaba escrita de la misma manera que al iniciarla (solo aparecÃ­a "r")
	
}

/*main function to call above defined function */

int main(){
	
	/*a pointer to an int*/
	
	int *p;
	int i;
	
	*p=getRandom(); //se le agrego el asterisco que faltaba como aparece al iniciar la variable tipo entero
	
	for (i=0;i<10;i++){
		
		printf("*(p+%d):%d\n",i,*(p+i));
	}
	return 0;
}
