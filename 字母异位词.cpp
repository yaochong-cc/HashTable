//#include<iostream>
//#include <cstring>
//using namespace std;
//class Solution {
//public:
//	bool isAnagram(string s, string t) {
//		int record[26];
//		for (int i = 0; i < s.length(); i++) {
//			record[s[i] - 'a']++;
//			record[t[i] - 'a']--;
//		}
//		for (int i = 0; i < 26; i++) {
//			if (record[i] != 0) {
//				return false;
//			}
//		}
//		return true;
//	}
//};
//int main() {
//	Solution s;
//	string s1, s2;
//	cin >> s1 >> s2;
//	if (s.isAnagram(s1, s2)) {
//		cout << "true";
//	}
//	else {
//		cout << "false";
//	}
//	return 0;
//}
