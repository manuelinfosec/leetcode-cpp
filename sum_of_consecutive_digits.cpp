#include <iostream>
#include <tuple>

// divide the number by 2
// add the 2s to a variable
// ...till it is no longer dividable by 2

std::tuple<int, int> consecutiveDigits(int y) {
	int y = 1;
	std::tuple<int, int> values;

	while (y%2==0){
		y /= 2;
		x *= 2;
	}
	return values = {x, y};
}

int main() {
	int num = 272;
	auto [x, y] = consecutiveDigits(num);

	std::cout << x << ", " << y << std::endl;
	return 0;
}