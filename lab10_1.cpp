#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int grade;
	string gg,a[3];
	cout<<"Press Enter 3 times to reveal your future.";
	getline(cin,a[0]);
	getline(cin,a[1]);
	getline(cin,a[2]);
	grade=(rand()%9)+1;
	if(grade==1)gg="A";
	else if(grade==2)gg="B+";
	else if(grade==3)gg="B";
	else if(grade==4)gg="C+";
	else if(grade==5)gg="C";
	else if(grade==6)gg="D+";
	else if(grade==7)gg="D";
	else if(grade==8)gg="F";
	else if(grade==9)gg="W";
	
	cout<<"You will get "<<gg<<" in this 261102.";
	
	return 0;
}