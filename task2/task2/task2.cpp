#include <iostream>
#include <stdlib.h>
using namespace std;

int customRandom(int min, int max)
{
	return min + rand() % (max - min + 1);
}
int win(int sum, int compSum) {
	if (sum > compSum){
		cout << "you win with " << sum << " point,computer got " << compSum << endl;}
	if (sum == compSum) {
		cout << "it's a draw,you got " << sum << " points,computer got " << compSum << endl;
	}
	else {
		cout << "you lose with " << sum << " point,computer got " << compSum << endl;
	}
}
int main(){
	string want = "";
	string next = "";
	if (customRandom(1, 2) == 1) {
		cout << "you first,want to roll the dice?(yes or no)" << endl;
		cin >> want;
		if (want == "yes") {
			cout << " u throw the dice "<<endl;
			int firstThrow = customRandom(1, 6);
			cout << " you got " << firstThrow << " points " << endl;
			int secondThrow = customRandom(1, 6);
			int intermediateResult = firstThrow + secondThrow;
			cout << " you got " << firstThrow << " and " << secondThrow << " points " << endl;
			cout << " computer throw the dice " << endl;
			int firstCompThrow = customRandom(1, 6);
			cout << " Computer got " << firstCompThrow << " points " << endl;
			int secondCompThrow = customRandom(1, 6);
			int intermediateCompResult = firstCompThrow + secondCompThrow;
			cout << " you got " << firstThrow << " and " << secondThrow << " points " << endl;
			cout << " will you throw more(yes or no) " << endl;
			cin >> next;
			if (next == "yes") {
				cout << " u throw the dice " << endl;
				int thirdThrow = customRandom(1, 6);
				cout <<  " you got " << thirdThrow << " points " << endl;
				int fourthThrow = customRandom(1, 6);
				int sum = intermediateResult + thirdThrow + fourthThrow;
				int thirdCompThrow = customRandom(1, 6);
				cout << " Computer got " << firstCompThrow << " points " << endl;
				int fourthCompThrow = customRandom(1, 6);
				int compSum = intermediateCompResult + thirdCompThrow + fourthCompThrow;
				cout << win(sum, compSum) << endl;

			}
			else {
				cout << "why not ? ): ";
			}
		}
		else {
			cout << "why not? ):";
		}
	}
	else {
		cout << " computer throw the dice ";
		int firstCompThrow = customRandom(1, 6);
		cout << " Computer got " << firstCompThrow << " points " << endl;
		int secondCompThrow = customRandom(1, 6);
		int intermediateCompResult = firstCompThrow + secondCompThrow;
		cout << " Comp got " << firstCompThrow << " and " << secondCompThrow << " points " << endl;
		cout << " u throw the dice " << endl;
		int firstThrow = customRandom(1, 6);
		cout << " you got " << firstThrow << " points " << endl;
		int secondThrow = customRandom(1, 6);
		int intermediateResult = firstThrow + secondThrow;
		cout << " you got " << firstThrow << " and " << secondThrow << " points " << endl;
		
		cout << "will you throw more(yes or no)" << endl << endl;
		cin >> next;
		if (next == "yes") {
			cout << " u throw the dice " << endl;
			int thirdThrow = customRandom(1, 6);
			cout << " you got " << thirdThrow << " points " << endl;
			int fourthThrow = customRandom(1, 6);
			int sum = intermediateResult + thirdThrow + fourthThrow;
			int thirdCompThrow = customRandom(1, 6);
			cout << " Computer got " << firstCompThrow << " points " << endl;
			int fourthCompThrow = customRandom(1, 6);
			int compSum = intermediateCompResult + thirdCompThrow + fourthCompThrow;
			cout << win(sum, compSum) << endl;
		}
		else {
			cout << "why not? ):";
		}
	}
}
