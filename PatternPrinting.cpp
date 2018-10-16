#include <iostream>
#include <string>

void decliningSteps(std::string sentence);
void decliningStepsMirrored(std::string sentence);
void decliningStepsFull(std::string sentence);

void incliningSteps(std::string sentence);
void incliningStepsMirrored(std::string sentence);
void incliningStepsFull(std::string sentence);

void reverseString(std::string sentence);

int main()
{
	std::string sentence = "Hello World";
	std::string sent;
	std::getline(std::cin, sent);
	decliningSteps(sent);
	//decliningStepsMirrored(sentence);
	//decliningStepsFull(sentence);
	//incliningSteps(sentence);
	//incliningStepsMirrored(sentence);
	//incliningStepsFull(sentence);
	//reverseString(sentence);
	std::cin.get();
	return 0;
}

void decliningSteps(std::string sentence)
{
	for (int i = 0; i < sentence.length() + 1; i++) {
		std::string tempF = sentence.substr(0, i);
		std::cout << tempF << std::endl;
	}
	std::cout << std::endl;
}

void decliningStepsMirrored(std::string sentence)
{
	for (int i = sentence.length(); i >= 0 + 1; i--) {
		sentence[i] = ' ';
		std::cout << sentence << std::endl;
	}
	std::cout << std::endl;
}

void decliningStepsFull(std::string sentence)
{
	for (int i = 0; i < sentence.length() + 1; i++) {
		std::string tempF = sentence.substr(0, i);
		std::cout << tempF << std::endl;
	}

	for (int i = sentence.length() - 1; i >= 0 + 1; i--) {
		sentence[i] = ' ';
		std::cout << sentence << std::endl;
	}

	std::cout << std::endl;
}

void incliningSteps(std::string sentence) {
	for (int i = sentence.length()-1; i > 0; i--) {
		std::string temp = sentence;
		temp.replace(0, i, " ");	
		std::cout << std::string(i - 1, ' ') << temp << std::endl;
	}
	std::cout << sentence << std::endl;
	std::cout << std::endl;
}

void incliningStepsMirrored(std::string sentence) {
	for (int i = 0; i < sentence.length(); i++) {
		std::cout << sentence << std::endl;
		sentence[i] = ' ';
		
	}
	std::cout << std::endl;
}

void incliningStepsFull(std::string sentence) {
	for (int i = sentence.length() - 1; i > 0; i--) {
		std::string temp = sentence;
		temp.replace(0, i, " ");
		std::cout << std::string(i - 1, ' ') << temp << std::endl;
	}
	for (int i = 0; i < sentence.length() + 1; i++) {
		std::cout << sentence << std::endl;
		sentence[i] = ' ';
	}
	std::cout << std::endl;
}

void reverseString(std::string sentence) {
	std::string reverse ="";
	for (int i = sentence.length() - 1; i >= 0; i--) {
		char c = sentence[i];
		reverse += c;
	}
	std::cout << reverse << std::endl;
	std::cout << std::endl;
}