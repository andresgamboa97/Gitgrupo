#include<iostream>

using namespace std;

int main(){
//declaracion de variables
int CLA,CAT,ANT,RES;
float SAL;

//ingreso de datos por parte del usuario

cout<<"ingrese categoria del trabajador: "<<endl;
cin>>CAT;
cout<<"ingrese antiguedad de años del trabajador: "<<endl;
cin>>ANT;
cout<<"ingrese clave del trabajador: "<<endl;
cin>>CLA;
cout<<"ingrese el salario deseado: "<<endl;
cin>>SAL;

if(CAT==3 && ANT>5 || CAT==4 && ANT>5 || CAT==2 && ANT>7){
RES=1;
cout<<"el trabajador es apto para el empleo";
}
else{
RES=0;
cout<<"el trabajador no cumple las condiciones para el empleo";
}
return 0;
}


