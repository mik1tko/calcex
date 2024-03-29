#include <iostream>

#include "detail/Calculator.h"
#include "detail/Parser.h"
#include "detail/tokenizer/AutomaticTokenizer.h"

using namespace detail;

int main()
{
    char buffer[100];

    std::cin.getline(buffer, 100);

    auto tokens = AutomaticTokenizer(buffer).tokenize();
    auto tree = Parser(tokens).parse();
    Calculator(tree).calculate();
    delete tree;
    return 0;
}