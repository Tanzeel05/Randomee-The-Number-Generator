#include<iostream>
#include<cstdlib>
using namespace std;


int main(){
	int a,b,guess;
	cout<<"Press 0 to Exit..."<<endl;
	a=rand()%100;
	while(1){
	
	
	cout<<"Guess a random number: "<<endl;
	cin>>guess;
	if(guess>a){
		cout<<"Too High"<<endl;
		continue;
	}
	else if(guess==a){
		cout<<"Correct..."<<endl;
		break;
	}
	else if(guess<a){
		cout<<"Too Low"<<endl;
		continue;
	}
	else if(guess==0){
		return 0;
	}
}
	return 0;
}
