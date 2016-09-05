// LeetCodeCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;


#include<vector>
#include<queue>

#include "350.cpp"



template<typename T> void print_queue(T& q) {
	while (!q.empty()) {
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;
}

int main()
{

	priority_queue<int> q;
	for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2}) {
		q.push(n);
	}



	cout << "Test Finished";
	cout << "Test Finished";
	cout << "Test Finished";










	
    return 0;
}

