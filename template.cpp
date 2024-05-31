#include <iostream>
#include <vector>
using namespace std;

vector<int> increaseVector(const vector<int>& vec, int n) {
	vector<int> res(vec.size());
	for (int i = 0; i < vec.size(); i++) {
		res[i] = vec[i] + n;
	}
	return res;
}