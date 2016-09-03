// LeetCodeCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;


#include<vector>
#include "350.cpp"



int main()
{

	int arr[] = { 13,24,15,16 };
	int len = sizeof(arr);

	vector<int> nums1;
	nums1.push_back(13);
	nums1.push_back(15);
	nums1.push_back(16);
	nums1.push_back(176);
	vector<int> nums2(arr, arr + sizeof(arr) / sizeof(int));
	Solution s;
	vector<int> v = s.intersect(nums1, nums2);


	cout << "Test Finished";










	
    return 0;
}

