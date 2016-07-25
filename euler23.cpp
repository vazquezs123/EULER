#include <iostream>
#include <vector>
using namespace std;

vector<int> isAbundant(int n, vector<int> abundantList);
vector<int> getDivisors(int n);
void printList(vector<int> list);
bool isAbundantSum(int n);

int main(){
	vector<int> abundantList;
	cout << endl << isAbundantSum(23);
	printList(test);
	
	/*
	long int sum = 0;
	for(int i = 0; i <= 28123; i++){
		cout << endl << i;
		if(!isAbundantSum(i))
			sum = sum + i;
	}
	
	cout << "\nSum: " << sum << endl;
	*/	
	return 0;
}

// checks if 'n' can be written as sum of two abundant numbers
bool isAbundantSum(int n, vector<int> abundantList){
	for(int i = 0; i < n; i++){
		for( int j = 0; j < n; j++){
			if( (isAbundant(i)) && (isAbundant(j)) && (i + j == n) )
				return true;
		}
	}
	return false;
}

// check if number is abundant
vector<int> notAbundantList(int n, vector<int> abundantList){
	vector<int> divisorList = getDivisors(n);	
	int divisorsSum = 0;
	for(int i = 0; i < divisorList.size(); i++){
		divisorsSum = divisorsSum + divisorList[i];
		if(divisorsSum > n){
			abundantList.push_back(n);
			return abundantList;
		}
	}
	return abundantList;
}

vector<int> getDivisors(int n){
	int limit = (n % 2 == 0) ? n / 2 : n / 3;
	vector<int> divisorList;
	for( int i = 1; i <= limit; i++){
		if( n % i == 0)
			divisorList.push_back(i);
	}
	return divisorList;
}

void printList(vector<int> list){
	for(int i = 0; i < list.size(); i++)
		cout << endl << list[i];
	cout << endl;

}
