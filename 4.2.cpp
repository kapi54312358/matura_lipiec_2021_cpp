#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=200;

bool palindrom(string a){
	int i=0;
	for(i=0; i<=a.size()/2; i++){
		if(a[i]!=a[a.size()-i-1]) return false;
	}
	return true;
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
		if(palindrom(seria[i]) || palindrom(cyfry[i]))
			cout<<dokument[i]<<endl;
	}
	
	return 0;
}
