#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> imap;

	for (int i = 0;; ++i) {
		auto it = imap.find(target - nums[i]);

		if (it != imap.end())
			return vector<int> {i, it->second};

		imap[nums[i]] = i;
	}
}
int main() {
	int a;
	cin >> a;
	cout << "hello world hskhflksssssvvvv" << endl;
	cout << a << endl;
	return 0;

}