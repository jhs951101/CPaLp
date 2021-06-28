#include <iostream>

using namespace std;

int main(){

	int sum1 = 0;
	int sum2 = 0;

	for(int n=1; n<=100; n++){
		sum1 = sum1 + pow(n,2);
	}

	for(int n=1; n<=100; n++){
		sum2 = sum2 + n;
	}
	sum2 = pow(sum2,2);

	cout << sum2 - sum1;

	return 0;

}