#include <iostream>
using namespace std;

int main(){

	float p=1;
	//p denotes the probability of 2 persons having different b'day
	//same b'day=1-p

	float num=365;
	float denom=365;
	int people=0;

	while(p>0.5){
		p *=(num/denom);
		num--;
		people++;
		cout<<"probability is"<<p<<"and people are"<<people<<endl;
	}

	return 0;
}