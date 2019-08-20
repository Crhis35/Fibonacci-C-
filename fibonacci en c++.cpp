/*
	Fibonacci
	Crhistian Caraballo :3
*/

#include<iostream>

using namespace std;

int main(){
	string res="no";
	cout<<"------------------------- \n******Fibonacci*******"<<endl;
	do{
		int n,x = 0, y = 1,z,suma = 0;
		
		cout<<"\n------------------------- \nDigite numero impar: "; cin>>n;
		
		if(n%2==0){
			cout<<"\nEl numero ingresado no es impar.";
		}else{
			for(int i = 1;i<=n; i++){
				cout<<x<<" ";
				if(x%3==0){
					suma +=x;
				}
				z = x+y;
				x = y;
				y = z;
				
			}
			cout<<"\nLa suma de la fibonacci es: "<<suma;
		}
		
		cout<<"\n------------------------- \nDesea continuar?, escriba (si) o de lo contrario cualquier cosa: "; cin>>res;
	}while(res=="si");	
	
	return 0;
}
