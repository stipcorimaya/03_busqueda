/*Se tienen los siguientes atributos de personal : DNI, nombres, día, mes y año de nacimiento. 
Se pide realizar una búsqueda binaria por fecha de nacimiento. Sugerencia: Use dos registros (personal y fecha) y tres funciones 
(uno para ordenar el arreglo por cada inserción, otro para la búsqueda y el último para comparar fechas).
Asuma que nadie comparte la misma fecha de nacimiento*/

#include<iostream>
#include<string>
#include <locale>

using namespace std;

struct personal{
	int DNI;
	string nombres;
};

struct fecha{
	int dia;
	int mes;
	int anio;
};

int main(){
	setlocale(LC_ALL, "Spanish"); //Escribir con lenguaje español al usuario
	int n;
	cout<<"escriba la cantidad de personas: ";
	cin>>n;
	personal personal[n];
	fecha fecha[n];
	
	for(int i=0;i<n;i++){
		cout<<"Datos de la persona"<<i+1<<":\n ";
		cout<<"Nombre: ";
		cin.ignore();
		getline(cin,personal[i].nombres);
		cout<<"DNI: ";
		cin>>personal[i].DNI;
		wcout<<L"Escriba su año de nacimiento: "; //uso de la Ñ
		cin>>fecha[i].anio;
		cout<<"Escriba su mes de nacimiento: ";
		cin>>fecha[i].mes;
		cout<<"Escriba su dia de nacimiento: ";
		cin>>fecha[i].dia;
		cout<<"<<<"<<personal[i].nombres<<"\n";
	}
	
	return 0;
}