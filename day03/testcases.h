#ifndef TESTCASES_H
#define TESTCASES_H

#include "../shared/testcase.h"
#include <vector>

const std::vector<Testcase> testcases{
    {R"puzzle(00100
11110
10110
10111
10101
01111
00111
11100
10000
11001
00010
01010)puzzle",{},198,0}
};

#endif // !TESTCASES_H