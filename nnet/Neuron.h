#pragma once
#include <vector>

struct Connection {
    double weight;
    double dWeight;
};

class Neuron
{
public:
    Neuron(unsigned numOutputs);
    void setOutput(double _output);
    void feedForward();
private:
    double output;
    std::vector<Connection> outputWeights;
};

