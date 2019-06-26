#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;


string solution(string &s,string &t);
//对字符串进行切片
vector<string> split(string &s);
//对匹配结果进行排序
bool compareLen(const string &a,const string &b){
	return (a.size()>b.size()); 
}
int main(){
	string s("This is C programming text");
	string t("This is a text for C programming");
	string r = solution(s,t);
	
	cout << r << "\n";
	return 0;
}

string solution(string &s,string &t){
	vector<string> ss = split(s);
	vector<string> tt = split(t);
	
	vector<string> result;
	//时间复杂度达到o(n^2)
	for(int i=0;i<ss.size();i++){
		for(int j=0;j<tt.size();j++){
			if(ss.at(i) == tt.at(j)){
				result.push_back(ss.at(i));
			}
		}
	}
	
	sort(result.begin(),result.end(),compareLen);
	if(result.size()>1){
		return result.at(1);
	}
	else if(result.size() == 1){
		return result.front();
	}
	else{
		return "NULL";
	}
	
	
}

vector<string> split(string &s){
	vector<string> out;
	vector<size_t> blankPos;
	for(size_t i=0;i<s.size();++i){
		if(s.at(i) == ' '){
			blankPos.push_back(i);
		}
	}
	if(blankPos.front() != 0){
		blankPos.insert(blankPos.begin(),0);
	}
	if(blankPos.back() != s.size()){
		blankPos.push_back(s.size());
	}
	for(size_t i=1;i<blankPos.size();++i){
		out.push_back(s.substr(blankPos.at(i-1),blankPos.at(i)-blankPos.at(i-1)));
	}
	return out;
}


