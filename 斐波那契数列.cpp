#include<iostream>
using namespace std; 
int result;
int  fun(int n){
	
	if(n==1||n==2){
		return 1;
	}
	result=fun(n-1)+fun(n-2);
}
int main(){
	int n;
	int num=0;
	cin>>n;
	for(int i=2;i<=n;i++){
		result=fun(i);	
		num++;
		cout<<result<<" "<<"num"<<num<<endl;
	}

	
	
}
