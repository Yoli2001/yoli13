//Programa que presenta las operaciones básicas
//Creado por stalin franci
// modificado YOLANDA GRACIA 
//Fecha:21 -09-2022

#include<iostream>
using namespace std;

int main()
{
	float jgx,jgy,jgs,jgm,jgd,jgr;
	//Ingreso de datos
	cout<<"Ingrese en valor de pmlix=:";
	cin>>jgx;
	cout<<"Ingrese en valor de pmliy=:";
	//Operaciones 
	cin>>jgy;
	jgs=jgx+jgy;
	jgm=jgx*jgy;
	jgd=jgx/jgy;
	jgr=jgx-jgy;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<jgx<<" + "<<jgy<<" = "<<jgs<<endl;
	cout<<"Las multiplicacion de "<<jgx<<" * "<<jgy<<" = "<<jgm<<endl;
	cout<<"Las division de "<<jgx<<" / "<<jgy<<" = "<<jgd<<endl;
	cout<<"Las resta de "<<jgx<<" - "<<jgy<<" = "<<jgr<<endl;
	return 0 ;

}
