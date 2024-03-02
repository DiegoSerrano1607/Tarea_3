#include <iostream>
using namespace std;
main(){
	/*
	int i=0;
	while(i<5){
		cout<<i<<endl;
		i++;
	}
	*/
	/*
	int i = 5;
	while(i<5){
		cout<<"WHILE: "<<i<<endl;
		i++;
	}
	*/
	char respuesta;
	
	do{
		cout<<"Desea ingresar otro valor (s/n) ";
		cin>>respuesta;

		}while(respuesta=='s' || respuesta=='S');
	
	
	
	
	system("pause");
}
