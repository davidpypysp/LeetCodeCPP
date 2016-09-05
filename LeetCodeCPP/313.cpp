#include"stdafx.h"
#include<iostream>

#include<vector>
#include<queue>
#include<unordered_set>
using namespace std;


struct compare {
	bool operator()(const int &l, const int &r) {
		return l > r;
	}
};


class Solution {
public:
	int nthSuperUglyNumber(int n, vector<int>& primes) {
		vector<int> nums(n, 0);
		nums[0] = 1;
		int len = primes.size();
		vector<int> idx(len, 0);

		for (int i = 1; i < n; i++) {
			int min = nums[idx[0]] * primes[0];
			for (int j = 1; j < len; j++) {
				if (nums[idx[j]] * primes[j] < min) {
					min = nums[idx[j]] * primes[j];
				}
			}
			nums[i] = min;
			for (int j = 0; j < len; j++) {
				if (min == nums[idx[j]] * primes[j]) {
					idx[j]++;
				}
			}
		}
		return nums[n - 1];
	}
};