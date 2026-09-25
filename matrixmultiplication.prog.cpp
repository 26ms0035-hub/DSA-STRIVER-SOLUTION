//Q.matrix multiplication 
#include <iostream>
using namespace std;
int main(){
	int m,n,p,q;
	cout<<"enter the number of row and column of matrix A"<<endl;
	cin>>m>>n;
	cout<<"enter the number of rows and columns of matrix B"<<endl;
	cin>>p>>q;
	int A[m][n];
	int B[p][q];
	int C[m][q];
	if (n==p){
		cout<<"multiplication is possible";
	}
	else{cout<<"multiplication is not possible"<<endl;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			cin>>B[i][j];}
		}
for(int i=0;i<m;i++){
	for(int j=0;j<q;j++){
		C[i][j]=0;
		for (int k=0;k<p;k++){
		C[i][j]+=A[i][k]*B[k][j];			
		}
	}
}
for (int i=0;i<m;i++){
	for(int j=0;j<q;j++){
		cout<<C[i][j]<<" "<<endl;
	}cout<<endl;
}
return 0;

	
}
