#include <iostream>

using namespace std;

int segitiga(int a, int t){
	int hasil;
	hasil = 0.5*a*t;
	return hasil;
}

int main(){
	int a,t;
	int luas;
	cout<<"Inputkan alas segitga : ";
	cin>>a;
	cout<<"Inputkan tinggi segitga : ";
	cin>>t;
	luas = segitiga(a,t);
	cout<<"Luas Segitiga Adalah : "<<luas<<endl;	
}
