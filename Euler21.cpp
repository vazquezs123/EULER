#include <iostream>
#include <vector>
using namespace std;

long int getDivisorsSum(int n);
int main(){
	int limit = 10000;
	long int amicableSum = 0; 
	for(int a = 1; a < limit; a++){
		for(int b = 1; b < limit; b++){
			if( (a != b) && (a == getDivisorsSum(b)) && (b == getDivisorsSum(a)) ){
				amicableSum = amicableSum + a;
				cout << "\nA: " << a;
                        	cout << "\nB: " << b;
                        	cout << "\nD(A): " << getDivisorsSum(a);
                        	cout << "\nD(B): " << getDivisorsSum(b);
				cout << "\nCurrent A Sum:  " << amicableSum;
			}	
			//cout << "\nA: " << a;
			//cout << "\nB: " << b;
			//cout << "\nD(A): " << getDivisorsSum(a);
			//cout << "\nD(B): " << getDivisorsSum(b);
		}
	}
	cout << " Amicable Numbers sum: " << amicableSum << endl; 
	return 0;
}

long int getDivisorsSum(int n){
	int limit = (n % 2 == 0) ? n / 2 : n / 3; // to slightly optimize
	long int sum = 0;
	for(int i = 1; i <= limit; i++){ // 
		if(n % i == 0)
			sum = sum + i;
	}
	return sum;
}
