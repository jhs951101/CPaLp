#include<iostream>

using namespace std;

int main(){

	int a = 2;
	long long n = 600851475143;

	while(n>1){

		if(n%a == 0){
			cout << a << " ";
			n = n/a;
		}
		else a++;
	}

	return 0;
}