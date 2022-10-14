// import headers
#include <iostream>
#include <string>
#include <map>

/** 
 * Given a roman numeral, it converts it to integer
 *	 
 * @param {string} romans: roman numeral to be converted
 * @return {int} numeral: converted to integer
 */
int romanToInt(std::string romans) {
	std::map<char, int> mappings;
	int numerals = 0;

	mappings.insert({'I', 1});
	mappings.insert({'V', 5});
	mappings.insert({'X', 10});
	mappings.insert({'L', 50});
	mappings.insert({'C', 100});
	mappings.insert({'D', 500});
	mappings.insert({'M', 1000});

	for(int i=0; i <= romans.length(); i++){
		if (mappings[romans[i+1]] > mappings[romans[i]]) {
			numerals -= mappings[romans[i]];
		}
		else {
			numerals += mappings[romans[i]];
		}
	}
	return numerals;
}

int main(int argc, char const *argv[])
{
	std::string roman {"IV"};
	int solution;

	solution = romanToInt(roman);
	std::cout << roman << " converted to integer is: " << solution << std::endl;
	return 0;
}