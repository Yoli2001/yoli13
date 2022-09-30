//Creado por stalin franci
// modificado YOLANDA GRACIA 
//Fecha:29 -09-2022
#include<iostream>
using namespace std;
int main()
{
	int jgi=0,jgl;
	float jgx,jgs=0;
	cout<<"ingrese el limite l="; cin>>jgl;
	do{
		
	cout<<"ingrese el numero x="; cin>>jgx;
	jgi=jgi+1;
	jgs=jgs+jgx;



	}while(jgi<jgl);
	cout<<"Se ingresaron "<<jgl<<" numeros "<< "que sumaron "<<jgs<<endl;
	return 0;



}


