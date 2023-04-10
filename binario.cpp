#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <bitset>

using namespace std;

void mostrar(int b[],int tamano, int i){
	
	for(i=0;i<tamano;i++)
		
		cout<<b[i]<<" ";
	cout<<endl;
	
}

int seleccionador(int a[]){
    
    srand(time(NULL));
	int c;
	c=1+rand()%(256-1);
	c=a[c];
    cout << "Numero a convertir = " << c << endl;
	return c;
}


int main(){
const int tamano=256;
int a[tamano],i,b,c;
short binario[8];

for(i=0;i<tamano;i++){
	a[i]=rand()%255;
}

mostrar(a,tamano,i);

b = seleccionador(a);
for ( i = 1; i < 9; i++)
{
    binario[i] = b % 2;
    b /= 2;
}

for ( i = 8; i > 0; i--)
{
    cout << "Bit N° " << i << " = " << binario[i] << endl;
}

}