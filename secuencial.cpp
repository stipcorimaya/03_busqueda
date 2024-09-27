#include<iostream>

using namespace std;

int secuencialDes(int A[],int n, double dato){
	int pos;
	int i=0;
	while(i<n and A[i] != dato){
		i++;
	}
	if(i<n){
		pos=i;
	}else{
		pos=-1;
	}
	return pos;
}

double secuencialOrd(int A[],int n, double dato){
	int j=0;
	double pos;
	while(j<n and A[j]<dato){
		j++;
	}
	if(j>=n or A[j] != dato){
		pos=-j-1;
	}else{
		pos=j+1;
	}
	return pos;
}

int main(){
	double posic;
	int dat, opc;
	int cant;
	cout<<"ingrese la cantidad de datos: ";
	cin>>cant;
	int matriz[cant];
	cout<<"ingrese los datos: "<<endl;
	for(int i=0;i<cant;i++){
		cout<<"num"<<i+1<<": ";
		cin>>matriz[i];
	}
	cout<<"los datos escritos estan ordenados? "<<endl<<"1) si"<<endl<<"2) no"<<endl;
	cin>>opc;
	cout<<" escriba el dato que quiera buscar: ";
	cin>>dat;
	switch(opc){
		case 1:
			posic=secuencialOrd(matriz, cant, dat);
			cout<<"posic: "<<posic<<endl;
			if(posic>0){
				cout<<"tu dato se encuentra en la posicion "<<posic;
			}else{
				cout<<"tu dato deberia estar en la posicion "<<posic;
			}
			break;
		case 2:
			posic=secuencialDes(matriz, cant, dat);
			
			if(posic>=0){
				cout<<"tu dato se encuentra en la posicion "<<posic+1;
			}else{
				cout<<"el dato que escribio no ha sido encontrado";
			}
			break;
		default:
			cout<<"reposder con 1 si esta ordenada y 2 si esque no";
			break;
	}
	
	
	return 0;
}