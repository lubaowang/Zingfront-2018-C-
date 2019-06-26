#include<iostream>
using namespace std;
//算法思想：最大的加和为原始数据的一半加上一半加1，故设定截止条件为t/2+1
//从最初开始，逐个检验加和序列，记录开始位置begin，结束位置i
//设置flag判断是否存在序列
int main(){
	int t;
	int flag = 0; 
	cin>>t;
	int begin=1;
//时间复杂度为O(nlog2n)
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
