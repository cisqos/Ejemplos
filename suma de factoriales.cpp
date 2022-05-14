/*Suma de factoriales*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,factorial=1, suma=0;
	
	cout<<"Digite un valor para n : ";
	cin>>n;
	
	for(int i=1; i<=n ; i++){
		factorial=factorial*i;
		suma+=factorial;
	}
	
	cout<<"La suma de factoriales es: "<<suma<<endl;
	
	
	
	
	system("pause");
	return 0;
}