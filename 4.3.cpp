#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=200;

int suma_id(string a){
	int i=0, sum=0, pom=0;
	int  waga[9];
	char b=0;
	
	waga[0]=7;
	waga[1]=3;
	waga[2]=1;
	waga[3]=0;
	waga[4]=7;
	waga[5]=3;
	waga[6]=1;
	waga[7]=7;
	waga[8]=3;
	
	for(i=0; i<3; i++){
		b=a[i]-'A'+10;
		pom=b*waga[i];
		sum+=pom;
	}
	
	for(i=3; i<=8; i++){
		b=a[i]-'0';
		pom=b*waga[i];
		sum+=pom;
	}
	
	return sum;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/identyfikator.txt");
	int suma=0;
	string dokument[n], seria[n], cyfry[n], a="", b="";
	int i=0, j=0;
	char c=0, d=0;
	
	
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
		a="";
		c=0;
		d=0;
		a=dokument[i];
		c=a[3]-'0';
		d=suma_id(a)%10;
		
		if(c!=d)
			cout<<a<<endl;	
	}

	return 0;
}
