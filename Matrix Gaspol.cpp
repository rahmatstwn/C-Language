#include <iostream>
using namespace std;

int main(){
	int m,n,p,hasil=0;
	cin>>m>>n>>p;
	cout<<endl;
	int A[m][n],B[n][p],C[m][p];
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>A[i][j];
		}
	}
	cout<<endl;
	for(int j=0; j<n; j++){
		for(int k=0; k<p; k++){
			cin>>B[j][k];
		}
	}
	
	for(int i=0; i<m; i++){
		for(int k=0; k<p; k++){
			for(int j=0; j<n; j++){			
				hasil = hasil +  A[i][j] * B[j][k];
				C[i][k]=hasil;			
			}hasil=0;
		}
	}cout<<endl;
	
	for(int i=0; i<m; i++){
		for(int k=0; k<p; k++){
			cout<<C[i][k]<<" ";
		}
		cout<<endl;
	}
}
