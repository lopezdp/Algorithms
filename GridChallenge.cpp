#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int testCaseInput();
int gridDescription();
void createGrid(int t, int n);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	// first line T number of test cases
    int t = testCaseInput();

    // second line N lines that contain N lowercase english letters,
    // each describing the grid
    int n = gridDescription();


    return 0;
}

int testCaseInput(){
	int t;
	cin >> t;
	cout << "Test Case Input is: " << t << endl;
	return t;
}

int gridDescription(){
	int n;
	cin >> n;
	cout << "Number of letters in Grid: " << n << endl;
	return n;
}

void createGrid(int t, int n){

}