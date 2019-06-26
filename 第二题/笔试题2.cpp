#include<iostream>
using namespace std;

int main(){
	int t;
	int flag = 0; 
	cin>>t;
	int begin=1;
	while(begin<t/2+1){
		int sum = 0;
		for(int i=begin;i<=t/2+1;i++){
			sum+=i;
			if(sum == t){
				flag =1;
				cout<<t<<"=";
				for(int j=begin;j<i;j++){
					cout<<j<<"+";
				}
				cout<<i<<endl;
			}
		}
		begin++;
	}
	if(flag ==0){
		cout<<"NONE"<<endl;
	}
	return 0;
}
