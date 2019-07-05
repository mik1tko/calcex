#include <iostream>

#include "detail/Tokenizer.h"
#include "detail/Parser.h"

using  namespace detail;

int main()
{
    char buffer[100];

    std::cin.getline(buffer, 100);

    auto tokens = Tokenizer(buffer).tokenize();
    auto tree = Parser(tokens).parse();
    return 0;
}