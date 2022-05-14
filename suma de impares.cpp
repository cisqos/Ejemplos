/*Escribe un programa que lea la suma de 1+3+5+...2n-1*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n, suma=0;
	cout<<"Digite un valor para n :";
	cin>>n;
	
	for(int i=1;i<=2*n-1;i+=2){
		
		suma+=i;
	}
	
	cout<<"La suma de numeros impares  es : "<<suma<<endl;
	system("pause");
	return 0;
}