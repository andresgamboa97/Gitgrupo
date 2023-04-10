#include <iostream>
#include <ctime>

using namespace std;
void temperatura_promedio(int a[]);
void temperatura_maxima(int a[]);
void temperatura_minima(int a[]);

int main(){
    srand(time(NULL));
    int TEM[24];
    int lectura;
    for (lectura = 1; lectura < 25; lectura++) // se definen 24 lecturas de temperatura
    {
       
        TEM [lectura] = rand() %40; // Se tomaran datos de temperatura que varian entre los 0 y 40 grados
    }
    temperatura_promedio(TEM);
    temperatura_maxima(TEM);
    temperatura_minima(TEM);
 return 0;
}

void temperatura_promedio(int a[]){ 
    int d;
    int c = 0;

   for (int b = 1; b < 25; b++) 
    {
        d = a[b]; 
        c = c + d;
    }
    c = c/24;
    cout << "Temperatura promedio = " << c << " [°C]" << endl;
    return ;
}

void temperatura_maxima(int a[]){
    int d;
    int c = -1;
    int e;

   for (int b = 1; b < 25; b++) 
    {
        d = a[b]; 
        if (c == -1){
        
            c = d;
        }
        if (d >= c)
        {
            c = d;
            e = b;
        }
        
    }
    cout << "Temperatura maxima = " << c << " [°C] a las " << e << ":00" << endl;
    return;
}
 
void temperatura_minima(int a[]){
    int d;
    int c = -1;
    int e;

   for (int b = 1; b < 25; b++) 
    {
        d = a[b]; 
        if (c == -1)
        {
            c = d;
        }
        if (d <= c)
        {
            c = d;
            e = b;
        }
        
    }
    cout << "Temperatura minima = " << c << " [°C] a las " << e << ":00" << endl;
    return;
}