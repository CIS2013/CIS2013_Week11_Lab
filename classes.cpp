#include <iostream>
#include <cstring>
using namespace std;

class BirthDate {
	public:
		int year = 0;
		int month = 0;
		int day = 0;
		void print(){
			cout << month << "/" << day << "/" << year;
		}
		
		void set(int d, int m, int y){
			year = y;
			month = m;
			day = d;
		}
};

int main(){
	
	BirthDate bob;
	
	cout << "Enter Bobs birthday day: ";
	cin >> bob.day;
	
	cout << "Enter Bobs birthday year: ";
	cin >> bob.year;
	
	cout << "Enter Bobs birthday month: ";
	cin >> bob.month;
	
	cout << "Bob's birthday is ";
	bob.print();
	cout << endl;
	
	BirthDate tom;
	cout << "Tom's birthday is ";
	tom.print();
	tom.set(20, 5, 1984);
	cout << "Tom's birthday is ";
	tom.print();
	
	return 0;
	
}