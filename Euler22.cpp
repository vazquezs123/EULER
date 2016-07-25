#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int getLetterValue(char a);
vector<string> parseFile(string fileName);
void printList(vector<string> list);
int getNameValue(string name);

int main(){
	vector<string> strList = parseFile("p022_names.txt");
	sort(strList.begin(), strList.end());

	long int totalNameScore = 0;

	// get name scores
	for( int i = 0; i < strList.size(); i++)
		totalNameScore = totalNameScore + (getNameValue(strList[i]) * (i + 1));
	cout << "\nTotal Name Score: " << totalNameScore;
	return 0;
}

int getNameValue(string name){
	int sum = 0;
	for(int i = 0; i < name.size(); i++){
		sum = sum + getLetterValue(name[i]);
	}
	return sum;
}

void printList(vector<string> list){
	for(int i = 0; i < list.size(); i++){
                cout << endl << list[i];
        }
}

vector<string> parseFile(string fileName){
	vector<string> strList;
	ifstream file;
	file.open(fileName.c_str());

	int quotes = 0;
	char c;
	string word; // stores the name
	while(file.get(c)){
		//cout << c;
		if(c == '"'){
			quotes = quotes + 1;
			if(quotes == 1){
				file.get(c); // if reached first quotes move to next char
			}
			
		}
		if(quotes == 1 && c != ','){ // make sure not empty string
			word.push_back(c);
		}
		if(quotes == 2){
			strList.push_back(word);
			quotes = 0;
			word = "";
		}	
	}
	file.close();
	return strList;
}



int getLetterValue(char a){
	switch( a ){
		case 'A':
			return 1;
		case 'B':
			return 2;
		case 'C':
			return 3;
		case 'D':
			return 4;
		case 'E':
			return 5;
		case 'F':
			return 6;
		case 'G':
			return 7;
		case 'H':
			return 8;
		case 'I':
			return 9;
		case 'J':
			return 10;
		case 'K':
			return 11;
		case 'L':
			return 12;
		case 'M':
			return 13;
		case 'N':
			return 14;
		case 'O':
			return 15;
		case 'P':
			return 16;
		case 'Q':
			return 17;
		case 'R':
			return 18;
		case 'S':
			return 19;
		case 'T':
			return 20;
		case 'U':
			return 21;
		case 'V':
			return 22;
		case 'W':
			return 23;
		case 'X':
			return 24;
		case 'Y':
			return 25;
		case 'Z':
			return 26;
	}
}
