#include<iostream>

using namespace std;

int main(){

	int a = 1, b = 2, c;
	long long even_sum = 2;

	while(c <= 4000000-2){

		c = a+b;
		a = b;
		b = c;

		if(c%2 == 0) even_sum = even_sum+c;
	}

	cout << even_sum;

	return 0;
}