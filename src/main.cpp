#include <iostream>
#include <sstream> 
#include <string>


int main(int argc, char *argv[]) {
	std::cout << "argc = " << argc << '\n';
	std::ostringstream exp;
	for (int i = 0; i < argc; ++i) {
		std::cout << "argv[" << i << "] = " << argv[i] << '\n';
		if ( i > 0) exp << argv[i] << " ";
	}
	std::string result = exp.str();
	std::cout << result << std::endl;

	return 0;
}
