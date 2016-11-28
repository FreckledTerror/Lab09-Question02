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
int main() {
	ifstream settings;
	string answers, key;
	int numOfQuestions, numOfCorrectAnswers;
	float pointGrade;

	gradeAnswer(answers, key, numOfQuestions);

	calculatePointGrade(numOfCorrectAnswers, numOfQuestions);

	calculateLetterGrade(pointGrade);

	readSettings(settings, key, numOfQuestions);

}

int gradeAnswer(string answers, string key, int numOfQuestions) { 
	
}

float calculatePointGrade(int numOfCorrectAnswers, int numOfQuestions) { 
	// To be completed 
}

string calculateLetterGrade(float pointGrade) { 
	// To be completed 
}


void readSettings(ifstream& settings, string& key, int& numOfQuestions) {
	// To be completed
} 