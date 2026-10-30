#include "Lexer.hpp"
#include "Token.hpp"
#include <iostream>
#include <vector>
#include <cctype>
#include <climits>

Lexer::Lexer(const std::string &input) : input_(input) {}

std::vector<Token> Lexer::tokenize() {
  std::vector<Token> tokens;
  for (std::size_t i = 0; i < input_.size(); ++i) {
    char current = input_[i]; 
	  if (std::isspace(current)) continue;
  
	  else if (std::isdigit(current)){ 
      std::string number;
      while(){}

      //std::cout << current << " " << std::endl;
    }
  }

  return tokens;
}
