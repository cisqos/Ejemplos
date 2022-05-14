/*suma de numeros +1-2+3-4+5-6...n*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,pos=0,neg=0, suma=0;
	
	cout<<"Digite un valor para n : ";
	cin>>n;
	
	for(int i=1; i<=n ; i+=2){
		pos+=i;
	}
	for(int j=2; j<=n ; j+=2){
		neg+=j;
	}
		
	suma=pos-neg;
	
	cout<<"La suma de enteros es : "<<suma<<endl;
	
	system("pause");
	return 0;
	
}