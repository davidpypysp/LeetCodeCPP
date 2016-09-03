#include "stdafx.h"
#include <iostream>
#include <vector>

#include<algorithm>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		vector<int> res;
		int i = 0, j = 0;
		while (i < nums1.size()) {
			while (j < nums2.size() && nums2[j] < nums1[i]) j++;
			if (j == nums2.size()) break;
			if (nums2[j] == nums1[i]) {
				res.push_back(nums2[j]);
				j++;
				i++;
			}
			else i++;
		}
		return res;
	}

};
