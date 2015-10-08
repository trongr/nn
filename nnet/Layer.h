#pragma once

#include <iostream> // mach remove
#include <vector>
#include "Neuron.h"

class Layer
{
public:
    Layer(Layer* _prevLayer, unsigned numNeurons, unsigned numOutputs);
    void setNeuronOutput(unsigned i, double output);
    void feedForward();
    int size();
private:
    std::vector<Neuron> neurons;
    Layer* prevLayer;
};

