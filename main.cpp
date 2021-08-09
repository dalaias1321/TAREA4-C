#include <iostream>
#include <math.h>
using namespace std;

//Funciones
int menu() {
	
	system ("cls");
	
	int opcion;
	cout<<"****************************************"<<endl;
	cout<<"*               MENU                   *"<<endl;
	cout<<"* 1.- Formula cuadratica               *"<<endl;
	cout<<"* 2.- Par / impar                      *"<<endl;
	cout<<"* 3.- Convertir de kilogramos a gramos *"<<endl;
	cout<<"* 4.- Covertir de libras a onzas       *"<<endl;
	cout<<"* 5.- Salir                            *"<<endl;
    cout<<"****************************************"<<endl;
    cout<<"Seleccione la opcion: ";
	cin>>opcion;
	 
	return opcion;
}

double formulacuadraticax1(double a, double b, double c) { 
  	double x1;
	x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2*a);


	return x1;
}

double formulacuadraticax2(double a, double b, double c){
	double x2;
	x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

	return x2;
}


//Procedimientos
void opcion1() {
	system("cls");
	
	cout<<"***************************************"<<endl;
	cout<<"*    1.- Formula cuadratica           *"<<endl;
	cout<<"***************************************"<<endl;
	
	double a, b, c, x1, x2, raiz, filtroRaiz, formulacuadratica;
	
    cout<<"Ingresar valor a: ";
	cin>>a;
	cout<<"Ingresar valor b: ";
	cin>>b;
	cout<<"Ingresar valor c: ";
	cin>>c;


if(a == 0){
		cout<<"a no puede ser cero"<<endl;
	}else {
	  filtroRaiz = pow(b, 2) - 4 * a * c;
		
		if(filtroRaiz < 0) {
			cout<<"la raiz cuadrada no puede ser negativa"<<endl;
		}else {
			x1 = formulacuadraticax1(a, b, c);
			x2 = formulacuadraticax2(a, b, c);
			
			cout<<"x1: "<<x1<<endl;
			cout<<"x2: "<<x2<<endl;
		}
	}
    
    formulacuadratica = 	formulacuadratica = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2*a);
    
    formulacuadratica =     formulacuadratica = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout<<"La formula cuadratica es: "<<formulacuadratica<<endl;
    system("pause");
	}
	
void opcion2() {
	system("cls");
	
	int numero, parImpar;
	
	cout<<"***************************************"<<endl;
	cout<<"*    2.- Par / impar                  *"<<endl;
	cout<<"***************************************"<<endl;
	cout<<"Ingrese numero: ";
	cin>>numero;
	
	parImpar = numero % 2;
	
	if(parImpar == 0){
    cout<<numero<<" es Par."<<endl;		
    }else {
    cout<<numero<<" es Impar."<<endl;	
	}
	
    system("pause");

}

void opcion3() {
	system("cls");
	
	int kilogramos,gramos;
	
	cout<<"****************************************"<<endl;
	cout<<"* 3.- Convertir de kilogramos a gramos *"<<endl;
	cout<<"***************************************"<<endl;
	cout<<"cuantos kilogramos desea invertir: ";
	cin>>kilogramos,
	gramos = kilogramos * 1000;
	cout<<kilogramos<<" kilogramos equivale a: "<<gramos<<" gramos "<<endl;
	
	system("pause");

}


void opcion4() {
	system("cls");
	
	int libras,onzas;
	
	cout<<"****************************************"<<endl;
	cout<<"* 4.- Convertir de libras a onzas      *"<<endl;
	cout<<"***************************************"<<endl;
	cout<<"cuantos libras desea invertir: ";
	cin>>libras;
	onzas = libras * 16;
	cout<<libras<<" libras equivale a: "<<onzas<<" onzas "<<endl;
	
	system("pause");

}


int main (int argc, char** argv) {
	int opt;
	
	while (opt != 5) {
		opt = menu();
		
		switch(opt) {
			case 1:
				opcion1();
				break;
			case 2:
				opcion2();
				break;
			case 3:
				opcion3();
				break;
			case 4:
				opcion4();
				break;
			case 5:
				break;
			default:
			   cout<<"Opcion no valida"<<endl;	
			   system("pause");				
		}
	}
		
	return 0;
}
