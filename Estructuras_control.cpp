#include <iostream>
using namespace std;
main(){
	/* PARA INCREMENTAR: 
	// para indicar que una variable va a aumentar su valor, se puede escribir como "i++, i+=1, i=i+1" //
	for (int i=0;i<=10;i+=1){  //la condicion indica que iniciará en 0 y se ejecutará hasta 9 //
		cout<<i<<endl;
	}
	
	system("pause");
	*/
	
	/*
	//PARA DECREMENTAR:
	for (int i=10;i>0;i--){  //la condicion indica que iniciará en 0 y se ejecutará hasta 9 //
		cout<<i<<endl;
	}
	
	system("pause");
	*/
	
	/*
	for (int i=0;i<10;i++){ 
		
		if(i==5){
		cout<<"if"<<endl;
		break; 	
		}
		
		cout<<i<<endl;
	}
	
	cout<<"FUERA DEL FOR. "<<endl;
	system("pause");
	*/ 
	/*
	int tam=0;
	int datos[] = {10,40,100,250,300};
	tam = sizeof(datos) / sizeof(datos[0]);
	
	for (int i=0; i<tam; i++){
		cout<<datos[i]<<endl;
	}
	
	
	system("pause");
	*/
	
	// FOR ANIDADO: 
	
	int inicio = 0, fin = 0, res = 0;
	
	cout<<"Ingrese tabla inicial: "<<endl;
	cin>>inicio;
	cout<<"Ingrese tabla final: "<<endl;
	cin>>fin;
	
	for (int rango=inicio; rango<=fin; rango++){
		cout<<"TABLA DEL "<<rango<<endl;
		for (int i=1; i<=10; i++){
			res = rango * i;
			cout<<rango<<" X "<<i<<" = "<<res<<endl;
		}	
	}
	
	system("pause");
}
