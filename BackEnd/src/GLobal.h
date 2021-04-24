//
// Created by Rainy Memory on 2021/4/15.
//

#ifndef TICKETSYSTEM_AUTOMATA_GLOBAL_H
#define TICKETSYSTEM_AUTOMATA_GLOBAL_H

#include <iostream>
#include "../include/RTL/string_t.h"
#include "../include/BPlusTree.h"
#include "../include/Parser.h"

//#define speedup
#define debug

#ifdef speedup
const char endl = '\n';
#else
using std::endl;
#endif

constexpr int lengthOfChineseCharacters(int length) {
    return length * 4;
}

#endif //TICKETSYSTEM_AUTOMATA_GLOBAL_H