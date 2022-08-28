#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
	
	
	int gameover(){
		int j;
		cout<<"\n\n\n";
		for (j=0;j<10;j++){
		
		cout<<"\t\t\tGAME OVER ";
		}
	}
	
 int run(void){
	int user;
	int stone = 1;
	int paper = 2;
	int sci = 3;
		srand(time(0));
	int machine =  rand()%3+1;
	cout.width(90);
	cout<<"A GAME BASED ON STONE PAPER AND SCISORR "<<endl;
	cout<<"CHoose your CHOICE : "<<endl<<endl;
	cout<<"  >>>1.Stone"<<endl;
	cout<<"  >>>2.Paper"<<endl;
	cout<<"  >>>3.Scisor"<<endl;
	cout<<"====>";
	cin>>user;
	
	cout<<"\n   YOUR CHOICE ======>"<<user<<endl;
	cout<<"   MACHINE CHOICE ===>"<<machine<<"\n\n\n\t";
	if(user == machine){
		cout<<"THIS IS A TIE GAME \n";
		run();
	}
	
	else if(user == stone && machine == paper){
		cout<<"THE machine WIN\n";
	gameover();
	}
	else if(user == stone && machine == sci){
		cout<<"THE USER WIN\n";
		run();
	}
	else if(user == paper && machine == stone){
		cout<<"THE USER WIN\n";
		run();
	}
	else if(user == paper && machine == sci){
		cout<<"THE machine WIN\n";
	gameover();
	}
	else if(user == sci && machine == stone){
		cout<<"THE machine WIN\n";
		gameover();
	}
	else if(user == sci && machine == paper){
		cout<<"THE USER WIN\n";
		run();
	}
	else{
		cout<<"INVALID NUMBER\n";
		gameover();
	}
	}
int main(){
	
	
	
    
	run();
	
	
	
	
	
	
	
	
	return 0;
}
