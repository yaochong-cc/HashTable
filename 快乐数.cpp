//#include<iostream>
//#include<unordered_set>
//using namespace std;
//class Solution {
//public:
//	int getSum(int n) {
//		int sum = 0;
//		while (n) {
//			sum += (n % 10) * (n % 10);
//			n /= 10;
//		}
//		return sum;
//	}
//	bool isHappy(int n) {
//		unordered_set<int> set;
//		while (1) {
//			int sum = getSum(n);
//			if (sum == 1) {
//				return true;
//			}
//			if (set.find(sum) != set.end()) {
//				return false;//set中出先过相同的sum，则返回false
//			}
//			else {
//				set.insert(sum);//sum!=1,将sum插入set
//			}
//			n = sum;//通过此进行快乐数循环
//		}
//	}
//};
//int main() {
//	Solution s;
//	int n;
//	cin >> n;
//	cout << s.isHappy(n) << endl;
//}