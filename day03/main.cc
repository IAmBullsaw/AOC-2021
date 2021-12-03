#include <functional>
#include "../shared/execution.h"
#include "./testcases.h"
#include "../shared/utils.h"

#include <bitset>
#include <string>

int solutionLvl1(const std::string& puzzle, const std::map<std::string, int>& parameters) {
    auto lines = split(puzzle);
    int counts[lines[0].size()]{0};

    for (const auto& bin : lines) {
        for (int i{0};i < bin.size(); i++) {
            if (bin[i] == '0') {
                counts[i]--;
            } else {
                counts[i]++;
            }
        }
    }

    std::string bin{""};
    for (const auto& v : counts) {
        if (v > 0) {
            bin += '1';
        } else {
            bin += '0';
        }
    }
    auto gamma = std::bitset<8>(bin);
    auto epsilon = gamma;
    epsilon.flip();

    return (int)(gamma.to_ulong()*epsilon.to_ulong());
}

int solutionLvl2(const std::string& puzzle, const std::map<std::string,int>& parameters) {

    return 0;
}

std::map<std::string,int> lvl1Parameters;
std::map<std::string,int> lvl2Parameters;

int main() {
    Execution::run(solutionLvl1, lvl1Parameters, solutionLvl2, lvl2Parameters, testcases);

    return 0;
}