/*Escriba el resultado de la suma de 1+2+3+...n*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0;
	
	cout<<"Digite el valor de n : "; cin>>n;
	
	for(int i=0;i<=n;i++){
		suma+=i;
	}
	
	cout<<"El resultado de la suma de "<< n <<" numeros es : "<<suma<<endl;
	
	
	return 0;
}