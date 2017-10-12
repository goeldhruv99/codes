#include <iostream>
using namespace std;

int main(){
	int hour,min,sec;
	cin>>hour>>min>>sec;

	if(12<hour<25,0<min<60,0<sec<60){
	hour=hour-12;
	cout<<hour<<":"<<min<<":"<<sec<<"pm";
	}
	else if(0<hour<12,0<min<60,0<sec<60){
		cout<<hour<<":"<<min<<":"<<sec<<"am";
	}
	else{
	cout<<"default";
	}
	return 0;
}