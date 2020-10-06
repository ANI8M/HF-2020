#include<iostream>
using namespace std;

//linear search
template< typename T>
int search(T a[],int n,T key){
	for(int p=0;p<n;p++){
		if(a[p]==key){
			return p;
		}
	}
	return n;
}

int main(){
	float a[]={1.1,1.2,1.3};
	float k=1.2;
	cout<<search(a,3,k);
}