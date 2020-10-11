#include <iostream>
#include <string>

std::string digit(std::string n) {
	if (n.length() == 1) {
		return n;
	}
	else {
		int sum = 0;
		for (int i = 0; i < n.length(); i++) {
			sum += std::stoi(n.substr(i, 1));
		}
		return digit(std::to_string(sum));
	}
}

int superDigit(std::string n, unsigned int k) {
	std::string nStr;
	for (int i = 0; i < k; i++) {
		nStr.append(n);
	}
	return std::stoi(digit(nStr));
}
int main()
{
	std::cout << superDigit("99999999999999999999999999", 104500); // 9
}
