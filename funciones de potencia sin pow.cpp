/* Escribe un programa que calcule x^y donde tanto x como y son enteros
positivos , sin utilizar la funcion pow*/

#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(){
	int x,y ,pot=1;
	
	cout<<"Digite un numero base : "; cin>>x;
	cout<<"Digite la potencia : "; cin>>y;
	
	for(int i=1;i<=y;i++){
			
		pot*=x;//Si pongo "cout aqui, me arroja todos los resultados, debemos ponerlo fuera de la funcion "for"

	}
	
	cout<<"La potencia es : "<<pot<<endl;
	system("pause");
	return 0;
}