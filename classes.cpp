#include <iostream>
#include <cstring>
using namespace std;

class BirthDate {
	private:
		int year = 0;
		int month = 0;
		int day = 0;
		
	public:
		void print(){
			cout << month << "/" << day << "/" << year;
		}
		
		void set(int d, int m, int y){
			year = y;
			month = m;
			day = d;
		}
		int get_year(){
			return year;
		}
		void set_year(int y){
			year = y;
		}
};

int main(){
	
	BirthDate tom;
	cout << "Tom's birthday is ";
	tom.print();
	cout << endl;
	tom.set(20, 5, 1984);
	cout << "Tom's birthday year is ";
	cout << tom.get_year() << endl;
	
	tom.set_year(2001);
	tom.print();
	cout << endl;
	
	return 0;
	
}