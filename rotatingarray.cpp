//Q.Rotating arrays
#include <iostream>
#include <vector>
using namespace std ;
void reversepart(int i,int j,vector<int>&v){
	while (i<=j){
		int temp=v[i];//swapping code
		 v[i]=v[j];
		 v[j]=temp;
		i++;
		j--;
	}
}
int main(){
	vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(7);
v.push_back(8);
int n=v.size();
int k;
cout<<"enter the value of k:"<<endl;
cin>>k;
int m=k%n;
reversepart(0,v.size()-1-m,v);
reversepart(v.size()-m,v.size()-1,v);
reversepart(0,v.size()-1,v);
for (int i=0;i<=v.size()-1;i++){
	cout<<v[i]<<endl;
}
	
}
