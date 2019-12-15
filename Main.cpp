#include "Header.h"

std::string input;
std::string yes[4] = { "Yes", "yes", "y", "Y" };
std::string no[4] = { "No", "no", "n", "N" };
int number;
int ints[32];
char charc[32];

int main() {
	srand(time(NULL));

	std::cout << "Random number and letters? Y/N";
	std::cin >> input;
	for (int i = 0; i < 4; i++) {
		if (input == no[i]) {
			number = rand() % 99;
			std::cout << "Whats the word you would like to use?";
			std::cin >> input;
			std::cout << "Here is your password: " << input << number << std::endl;
			std::cin >> input;
			return 0;
		}
		if (input == yes[i]) {
			std::cout << "How many characters for numbers and letters?";
			std::cin >> number;
			for (int j = 0; j < number; j++) {
				ints[j] = rand() % 9;
				charc[j] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26];
				
			}
			std::cout << "Your password: ";
			for (int k = 0; k < number; k++) {
				std::cout << ints[k] << charc[k];
				
			}
			std::cin >> input;
		}
	}
	
	

	return 0;
}