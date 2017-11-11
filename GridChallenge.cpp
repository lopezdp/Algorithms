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

    createGrid(t, n);


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
	char ***grid = new char **[t];
	// Iterates through each test case
	for(int i = 0; i < t; i++){
		// Iterates through each row in each test case
		for(int j = 0; j < n; j++){
			grid[i] = new char *[n];

			// Iterates through each column in each test case
			for(int k = 0; k < n; k++){
				grid[i][j] = new char [n];
				cin >> grid[i][j][k];
				cout << "This is 3d output: " << grid[i][j][k] << endl;
			}
		}
	}
}