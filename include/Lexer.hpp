#pragma once

#include "Token.hpp"
#include <string>
#include <vector>
class Lexer{

public:
	Lexer(const std::string& input);
	std::vector<Token> tokenize();
private:
	std::string input_;
};
