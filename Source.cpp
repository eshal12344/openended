#include <iostream>
using namespace std;
int arr1[5];
int arr2[7];
int merge12[12];
void commelements() {
	cout << "Common elements" << endl;
	for (int r = 0;r < 5;r++) {
		for (int a = 0;a < 7;a++) {
			if (arr1[r] == arr2[a]) {
				cout << arr1[r] << " ";
				break; 
			}
		}
	}
}
bool ispalindrome(string& sen) {
	
		for (int x = 0;x < sen.length()/2;x++) {
			int last = sen.length()-1;
			int first = 0;
			if (sen[first++] == sen[last--]) {
				return true;
			}
			else {
				return false;
			}
		}
		
	
}
void swap(int &a,int& b) {
	int c = 0;
	c = a;
	a = b;
	b = c;

}
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
	int i = 0, j = 0, k = 0;
	cout << "Merged arrays in assending order" << endl;

	while (i < size1 && j < size2) {
		if (arr1[i] < arr2[j]) {
			mergedArr[k++] = arr1[i++];
		}
		else {
			mergedArr[k++] = arr2[j++];
		}
	}

	while (i < size1) {
		mergedArr[k++] = arr1[i++];
	}

	while (j < size2) {
		mergedArr[k++] = arr2[j++];
	}
	for (int i = 0; i < 11; i++) cout << mergedArr[i] << " ";
      cout << endl;
}

int main() {
	
	cout << "Enter 5 elements of 1st array=" << endl;
	for(int s=0;s<5;s++){
		
		cin >> arr1[s];

	}
	cout << "Enter 7 elements of 2nd array=" << endl;
	for (int e = 0;e < 7;e++) {
		cin >> arr2[e];

	}
	commelements();
	cout << endl;
	mergeArrays(arr1, 5, arr2, 7, merge12);
	cout << endl;
	cout << "Enter a sentence to check if its palindrome or not" << endl;
	string sentense;
	cin >> sentense;
	if (ispalindrome(sentense)) {
		cout << "The sentense is palindrome" << endl;
	}
	else {
		cout << "The sentense is not palindrome" << endl;
	}
	
	return 0;
}