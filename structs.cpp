#include <iostream>
#include <cstring>
using namespace std;

struct myDate {
	int day;
	int month;
	int year;
};

struct Person {
	myDate birthday;
	string firstname;
	string lastname;
	int age;
};

void printmyDate(Person d){
	cout << d.birthday.month << "/" << d.birthday.day << "/" << d.birthday.year;
}

int main(){
	
	// myDate bob_bday;
	myDate tom_bday;
	
	Person bob;
	bob.firstname = "Bob";
	bob.lastname = "Rockers";
	bob.age = 41;
	
	cout << "Enter " << bob.firstname << " birthday day: ";
	cin >> bob.birthday.day;
	
	cout << "Enter " << bob.firstname << " birthday year: ";
	cin >> bob.birthday.year;
	
	cout << "Enter " << bob.firstname << " birthday month: ";
	cin >> bob.birthday.month;
	
	cout << bob.firstname << " " << bob.lastname << "'s birthday is ";
	printmyDate(bob);
	cout << endl;
	
	return 0;
}

