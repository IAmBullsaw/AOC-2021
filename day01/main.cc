#include <functional>
#include "../shared/execution.h"
#include "./testcases.h"
#include "../shared/utils.h"

#include <string>
#include <sstream>
#include <iostream>

int solutionLvl1(const std::string& puzzle, const std::map<std::string, int>& parameters) {
    auto lines = split_ints(puzzle);

    int previous{lines[0]};
    int count{0};
    for (auto& line: lines) {
        if (previous < line) {
            count++;
        }

        previous = line;
    }

    return count;
}

int solutionLvl2(const std::string& puzzle, const std::map<std::string,int>& parameters) {
    auto lines = split_ints(puzzle);

    int previous{lines[0] + lines[1] + lines[2]};

    int count{0};
    for (int i{0}; i < lines.size()-2; i++ ) {

        int current{lines[i] + lines[i+1] + lines[i+2]};
        if (previous < current) {
            count++;
        }

        previous = current;
    }

    return count;
}

std::map<std::string,int> lvl1Parameters;
std::map<std::string,int> lvl2Parameters;

int main() {
    Execution::run(solutionLvl1, lvl1Parameters, solutionLvl2, lvl2Parameters, testcases);

    return 0;
}