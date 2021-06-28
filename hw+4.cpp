#include <iostream>

using namespace std;

int main(){

	int bol = 0;
	int n = 1;

	while(bol == 0){

		int yes = 1;

		for(int a=1; a<=20; a++){
			if(n%a != 0){
				yes = 0;
			}
		}
		if(yes == 0) n++;
		else bol=1;
	}

	cout << n;

	return 0;

}