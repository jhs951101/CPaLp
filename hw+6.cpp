#include <iostream>

using namespace std;

int main(){

	int n = 2;
	int ctd = 0;
	
	while(ctd != 10001){

		int prime = 1;
		for(int a=2; a<=n-1; a++){
			if(n%a == 0) prime = 0;
		}

		if(prime == 1) ctd++;
		
		n++;
	}

	cout << n-1;

	return 0;

}