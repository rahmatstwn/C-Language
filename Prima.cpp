#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,x=1;
	cin>>n;
	int hasil = sqrt(n);
	
	for(int i=hasil; i>=2; i--){
		if(n%i != 0){
			 x+=1;
		}
    }
    
	if(n==1 || x!=hasil){
		cout<<"Bukan Prima";
	}else if(x==hasil || n==2){
		cout<<"Prima";
	}
}
