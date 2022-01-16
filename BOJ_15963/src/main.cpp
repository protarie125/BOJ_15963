#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	cout << (a == b ? 1 : 0);

	return 0;
}