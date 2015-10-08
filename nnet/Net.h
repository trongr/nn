#pragma once

#include <vector>
#include "Layer.h"

class Net
{
public:
    Net(const std::vector<unsigned> &topology);
    void feedForward(const std::vector<double> &input);
    void backProp(const std::vector<double> &target);
    void getResult(std::vector<double> &result) const;
private:
    std::vector<Layer*> layers;
};

