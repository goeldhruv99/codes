#include <iostream>
using namespace std;

void printsubsequence(char *in,char *out,int i, int j){
        if(in[i]=='\0'){
        	out[j]='\0';
        	cout<<out<<endl;
        	return;
        }
        //two case
        //1.take
        out[j]=in[i];
        printsubsequence(in,out,i+1,j+1);
        //2.leave
        printsubsequence(in,out,i+1,j);
}

int main(){

	char input[]="abc";
	char output[10];
	printsubsequence(input,output,0,0);
	

	return 0;
}