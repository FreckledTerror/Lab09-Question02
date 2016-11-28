/*
Hunter Lopez
11/17/16
Lab 09 Question 02
*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int gradeAnswer(string, string, int);
float calculatePointGrade(int, int);
string calculateLetterGrade(float);
void readSettings(ifstream&, string&, int&);
int main() {
	ifstream settings;
	string answers, key;
	int numOfQuestions = 0, numOfCorrectAnswers = 0;
	float pointGrade = 0.0;

	gradeAnswer(answers, key, numOfQuestions);

	//Rest of function calls are in the Word Document until needed

	return 0;
}

int gradeAnswer(string answers, string key, int numOfQuestions) { 
	ifstream file, inFS;
	string firstName, lastName;
	char symbol;
	float percentage;

	file.open("grades.txt");

	if (!file.is_open()) {
		cout << "Could not open file grades.txt." << endl;
	}

	file >> firstName >> lastName >> percentage >> symbol >> answers;

	cout << answers << endl;

	inFS.open("settings.txt");

	if (!inFS.is_open()) {
		cout << "Could not open file settings.txt." << endl;
	}

	inFS >> numOfQuestions;
	inFS >> key;

	cout << numOfQuestions << endl;
	cout << key << endl;

	return 0;
}

float calculatePointGrade(int numOfCorrectAnswers, int numOfQuestions) { 
	

	return 0;
}

string calculateLetterGrade(float pointGrade) { 
	

	return 0;
}


void readSettings(ifstream& settings, string& key, int& numOfQuestions) {
	
} 