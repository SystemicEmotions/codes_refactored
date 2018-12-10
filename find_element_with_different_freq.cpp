//https://www.geeksforgeeks.org/find-the-element-having-different-frequency-than-other-array-elements/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {1,1,2,2,3};
	//int a[] = {0,1,2,4,4};
	int n = sizeof(a)/sizeof(a[0]);

	map<int, int> m ;

	for(int i=0;i<n;i++){
		m[a[i]]++;
	}

	map<int,int> ::iterator it; 
	map<int, int> freq;

	for(it=m.begin();it!=m.end();++it){
		freq[it->second]++;
	}

	for(it=m.begin();it!=m.end();++it){
		if(freq[it->second]==1)
			cout<<it->first<<endl;
	}
	
}

