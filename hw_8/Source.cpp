#include <iostream>
using namespace std;

int read_Data();
int absolute_Value(int);
bool check_Positive(int);
bool odd_Even(int);
void display(int);

int main(void) {
	int y = read_Data();
	display(y);
	return 0;

}

int read_Data() {
	int x;

	cout << "Enter a number: ";
	cin >> x;
	return x;
}

bool check_Positive(int x){
	if (x > 0) {
		return true;
	}
	else if (x = 0) {
		return true;
	}
	else{
		return false;
	}

}

int absolute_Value(int num){
	int value = num;

	if (num < 0) {
		value = num - (num * 2);
		return value;
	}
		return value;

}

bool odd_Even(int x) {
	if (x > 0 && x % 2 == 0){
		return true;
	}
	else{
		return false;
	}
}

void display(int x) {

	cout << "Is the number positive? ";
	cout << boolalpha << check_Positive(x) << endl;
	cout << "The absolute value is ";
	cout << absolute_Value(x) << endl;
	cout << "Is the number even? ";
	cout << odd_Even(x) << endl;
}