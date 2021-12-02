#ifndef TESTCASES_H
#define TESTCASES_H

#include "../shared/testcase.h"
#include <vector>

const std::vector<Testcase> testcases{
    {R"puzzle(199
200
208
210
200
207
240
269
260
263)puzzle",{},7,5}
};

#endif // !TESTCASES_H