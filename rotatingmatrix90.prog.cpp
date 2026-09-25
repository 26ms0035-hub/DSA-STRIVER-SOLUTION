#include <iostream>
using namespace std;
int main(){
	int m;
	cout<<" enter the number of rows "<<endl;
	cin>>m;
	int a[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for (int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			int temp=a[i][j];
	a[i][j]=a[j][i];
		a[j][i]=temp;	}
	cout<<endl;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<(m/2);j++){
			int temp =a[i][j];
			a[i][j]=a[i][m-1-j];
			a[i][m-1-j]=temp;
		}
	}
	for(int i=0;i<m;i++){
		for (int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
