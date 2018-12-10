//https://www.geeksforgeeks.org/form-smallest-number-using-one-swap-operation/

#include<bits/stdc++.h>
using namespace std;

string smallestNumber(string s){
	int n = s.size();

	map<char,int> m;
	int num[n];

	for(int i=0;i<n;i++){
		m[s[i]-'0'] = i;
		num[i] = s[i] -'0';
	}

	int min;
	int  indx=0;

	for(int i=0;i<n;i++){
		min = *min_element(num+i,num+n);

		if(min==0 && i==0){;}
		else{
			if(min<num[i] && m.find(min)!=m.end()){
				map<char,int>::iterator it = m.find(min);
				indx = it->second;
				swap(s[i],s[indx]);
				break;
			}
		}
		
		
	}
	return s;
}

int main() { 
    string num = "3262"; 
    //string num = "1205763";
    cout<<smallestNumber(num)<<endl; 
    return 0; 
} 