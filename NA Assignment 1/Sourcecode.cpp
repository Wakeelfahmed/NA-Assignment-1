#include <iostream>
#include <sstream>
#include <vector>
#include <string>
//int main() {
//    // Get the expression as input
//    std::string expression;
//    std::cout << "Enter the expression: ";
//    std::getline(std::cin, expression);
//}


using namespace std;
void get_Variables_from_Expression(int Term[]) {
	string expression;
	std::getline(std::cin, expression);
	// Assuming the expression contains four variables, you can use a stringstream to parse them
	std::istringstream iss(expression);
	std::vector<std::string> variables;

	int i = 0;
	while (iss >> expression) {
		if (expression != "=") {
			variables.push_back(expression);
			Term[i] = stoi(expression);
			i++;
		}
	}
	std::cout << "Separated Variables:" << std::endl;
	for (const std::string& variable : variables)
		cout << variable << endl;

	for (int i = 0; i < 4; i++)
		cout << Term[i] << "  ";

}
int main() {
	string Expression[4];
	float Terms[4][5] = {
						{10, -1, 2 , 0,  6},
						{-1, 11, -1, 3, 25},
						{ 2, -1, 10, -1, -11},
						{ 0,  3,  0, 8, 15},
					  };
	//cout << "Enter 1st expression: ";
	//get_Variables_from_Expression(Terms[0]);
	//cout << "Enter 2nd expression: ";
	//get_Variables_from_Expression(Terms[1]);
	//cout << "Enter 3rd expression: ";
	//get_Variables_from_Expression(Terms[2]);
	//cout << "Enter 4th expression: ";
	//get_Variables_from_Expression(Terms[3]);

	for (size_t i = 0; i < 4; i++) {
		for (size_t j = 0; j < 5; j++) {
			if (j == 4)
				cout << " = ";
			cout << Terms[i][j] << "  ";
		}
		cout << endl;
	}
	int Leading_Var;
	for (size_t i = 0; i < 4; i++) {
		for (size_t j = 0; j < 5; j++) {
			Terms[i][j] << "  ";
		}
		cout << endl;
	}

}