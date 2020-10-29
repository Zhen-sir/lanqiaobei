#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char c;
	int num;
	cin>>c;
	if(c>='2'&&c<='9'){
		num=c-48;
		for(int i=1;i<num;i++){
			for(int j=1;j<=i;j++){
				cout<<i<<"*"<<j<<"="<<i*j<<" ";
			}
			cout<<endl;
		}
	}
	else {
		num=c-55;
			for(int i=1;i<num;i++){
			for(int j=1;j<=i;j++){
				cout<<i<<"*"<<j<<"="<<i*j<<" ";
			}
			cout<<endl;
		}
	}
}
