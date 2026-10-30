#pragma once

enum class TokenType { 
	Number, Plus, Minus, Multiply, Divide, LParen, RParen, End 
};

struct Token {
	TokenType type;
	double value = 0.0;
};
