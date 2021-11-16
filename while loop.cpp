
//while loop example 

#include <iostream>
using namespace std;

int main(){
	string Song;
	char resp;
	
	cout<<"Please enter your favourite song:";
	cin>>song;
	cout>>"Do you wish to continue (Y/N)? ";
	cin>>resp;
	
	while (resp!=‘N’){
		cout<<"Please enter a song you like: ";
		cin>>song;
		cout>>"Do you wish to continue (Y/N)? ";
		cin>>resp;
   }
   return 0;
}
