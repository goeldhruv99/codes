#include <iostream>
using namespace std;

int ways(int i,int j){
	if(i==0&&j==0){
		return 1;
	}
	//out of bounds
	if(i<0||j<0){
		return 0;
	}
	//otherwise
	return ways(i-1,j) +ways(i,j-1);
}

int main(){
	

	cout<<ways(2,2);
	
	return 0;
}