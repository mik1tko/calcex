//
// Created by nikita on 7/4/19.
//

#ifndef CALCEX_TOKENIZER_INTERFACE_H
#define CALCEX_TOKENIZER_INTERFACE_H

#include <vector>
#include "Token.h"

class TokenizerInterface {
public:
    virtual std::vector<detail::Token> tokenize() = 0;
};

#endif //CALCEX_TOKENIZER_INTERFACE_H
