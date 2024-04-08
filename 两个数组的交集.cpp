//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//		unordered_set<int> result_set;
//		unordered_set<int> num_set(nums1.begin(), nums1.end());
//		for (int num : nums2) {//这段代码使用了C++11中的范围基础for循环，对数组nums2中的每个元素执行循环体中的操作。在此循环中，变量num会依次代表nums1中的每个元素的数值
//			if (num_set.find(num) != num_set.end())
//				result_set.insert(num);
////num_set.find(num) 将在 num_set 中查找值为 num 的元素，并返回指向该元素的迭代器。
//// 如果找不到匹配的元素，则返回迭代器 num_set.end()，表示未找到。
//		}
//		return vector<int>(result_set.begin(), result_set.end());
//	}
//	
//};
//
//int main() {
//	Solution solution;
//	vector<int> nums1 = { 1, 2, 2, 1,6 ,3};
//	vector<int> nums2 = { 2, 2,99,78,3 };
//	vector<int> result = solution.intersection(nums1, nums2);
//	for (int num : result) {
//		cout << num << " ";
//	}
//	cout << endl;
//	return 0;
//}