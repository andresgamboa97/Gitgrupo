#include <iostream>
#include <math.h>

using namespace std;
float media_aritmetica(int a[], int b);
float varianza(int a[], int b, float c);
void desviacion_estandar(float a);
void moda(int a[], int b);

int main(){
    int N;
    cout << "Ingrese cantidad de notas" << endl;
    cin >> N;
    int ALU[N];
    float nota;
    float media;
    float var;

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

float media_aritmetica(int a[], int b){
    int d;
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

float varianza(int a[], int b, float c){
    int d;
    float e;
    float g = 0;

   for (int f = 1; f < b+1; f++) 
    {
        d = a[f];
        e = d - c;
        e = e * e;
        g = g + e;
}
g = g/(b-1);
cout << "Varianza = " << e << endl;
return g;
}

void desviacion_estandar(float a){
    float b;
    b = sqrt(a);
    cout << "Desviacion estandar = " << b << endl;
}

void moda(int a[], int b){
    int d;
    int e;
    int g;
    int h = 0;
    float j;
    

   for (int c = 1; c < b+1; c++) 
    {
        int f = 0;
        d = a[c];
        for (int i = 1; i < b+1; i++)
        {
            e = a[i];
            if ( d == e){
                f++;
                g = f;
            }
        }
    if (g >= h )
    {
        h = g; 
        j = d;
    }   
}
cout << "Media = " << j << endl;
}
