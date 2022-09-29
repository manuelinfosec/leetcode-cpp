// The Power of Mod and Division

/*
Given a positive integer num..
...return the sum of its digits.

NO USE OF STRINGS.

Input: 123 
Expected Output: 6
```1 + 2 + 3 = 6```
*/

// Solution
// Mod num by 10 to collect last digit
// Add the remainder to a counter
// Divide new num by 10 to remove last 0
// Repeat till num is unmoddable (0)

#include <iostream>
#include <cstdlib>

int sumDigits(int num){
	int rem;
	int numofDigits = 0;

	while (num != 0) {
		// mod by 10
		rem = num % 10;
		// add remainder	
		numofDigits += rem;
		// remove proceeding 0
		num /= 10;
	}
	return numofDigits;
}

int main(int argc, char **argv) {
	if (argc < 2){
		std::cout << "Incorrect usage." << std::endl;
		std::cout << "Usage: sum_digits.exe <num>" << std::endl;
		return 0;
	}

	int num = atoi(argv[1]);

	int solution = sumDigits(num);
	std::cout << "Solution: " << solution << std::endl;
	return 0;
}