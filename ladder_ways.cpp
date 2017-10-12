#include <iostream>
using namespace std;
int ways(int n,int k){

	if(n=0){
		return 1;

	}

	if(n<0){
		return 0;
	}
	int ans=0;
	for(int j=1;j<=k;k++){
		
		ans += ways(n,n-k);
	}
	return ans;

	
}

int main(){

	cout<<ways(8,3)<<endl;
	
	return 0;
}