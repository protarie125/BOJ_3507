#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = int{ 0 };
	for (int i = 0; i < 100; ++i) {
		for (int j = 0; j < 100; ++j) {
			if (0 == n - i - j) {
				++ans;
			}
		}
	}

	cout << ans;

	return 0;
}