#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=200;

int suma_cyfr(string a){
	int i=0, suma=0;
	char b=0;
	for(i=0; i<a.size(); i++){
		b=a[i]-'0';
		suma+=b;
	}
	return suma;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/identyfikator.txt");
	int  suma=0, najw_suma=0;
	string dokument[n], seria[n], cyfry[n], a="", b="";
	int i=0, j=0;
	
	for(i=0; i<n; i++){
		we>>dokument[i];
		a=dokument[i];
		
		for(j=0; j<3; j++){
			seria[i]+=a[j];
		}
		
		for(j=3; j<9; j++){
			b+=a[j];
		}
		cyfry[i]=b;
		
		a="";
		b="";
	}
	
	for(i=0; i<n; i++){
		if(suma_cyfr(cyfry[i])>najw_suma){
			najw_suma=suma_cyfr(cyfry[i]);
		}
	}
	
	for(i=0; i<n; i++){
		if(suma_cyfr(cyfry[i])==najw_suma){
			cout<<dokument[i]<<endl;
		}
	}
	
	return 0;
}
