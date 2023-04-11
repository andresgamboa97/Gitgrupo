#include <iostream>
#include <math.h>

using namespace std;
float media_aritmetica(float a[], int b);
float varianza(float a[], int b, float c);
void desviacion_estandar(float a);
void moda(float a[], int b);

int main(){
    int N;
    cout << "Ingrese cantidad de notas " << endl;
    cin >> N;
    float ALU[N];
    float nota;
    float media;
    float var;
    cout <<"Las notas deben ser ingresadas en formato x.y, por ejemplo 6.5"<< endl;

    for (int i = 1; i < N+1 ; i++)
    {
        cout << "Ingrese nota N° " << i << endl;
        cin >> nota;
        ALU[i] = nota;
    }
    media = media_aritmetica(ALU, N);
    var = varianza(ALU, N, media);
    desviacion_estandar(var);
    moda(ALU, N);

return 0;
}

float media_aritmetica(float a[], int b){
    float d;
    float e = 0;

   for (int c = 1; c < b+1; c++) 
    {
        d = a[c];
        e = e + d;
}
e = e/b;
cout << "Media aritmetica = " << e << endl;
return e;
}

float varianza(float a[], int b, float c){
    float d = 0;
    float e = 0;
    float g = 0;

   for (int f = 1; f < b+1; f++) 
    {
        d = a[f];
        e = d - c;
        e = e * e;
        g = g + e;
}
g = g/(b-1);
cout << "Varianza = " << g << endl;
return g;
}

void desviacion_estandar(float a){
    float b;
    b = sqrt(a);
    cout << "Desviacion estandar = " << b << endl;
}

void moda(float a[], int b){
    int cont1 = 0, cont2 =0;
    float mod;
    for (int i = 0; i < b; i++)
    {
       for (int j = 0; j < b; j++)
       {
        if (a[i] == a[j] && i != j)
        {
            cont1++;
        }
        
       }
       if (cont1 > cont2)
       {
        cont2 = cont1;
        mod = a[i];
       }
       cont1 = 0;
    }
    
    cout << "Moda = " << mod << endl;
}
