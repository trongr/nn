#include <iostream>
#include "Layer.h"

using namespace std;

Layer::Layer(Layer* _prevLayer, unsigned numNeurons, unsigned numOutputs) 
    : prevLayer(_prevLayer)
{
    for (unsigned neuronNum = 0; neuronNum <= numNeurons; neuronNum++){
        neurons.push_back(Neuron(numOutputs));
    }
}

// Sets the ith neuron's output value
void Layer::setNeuronOutput(unsigned i, double output){
    neurons[i].setOutput(output);
}

// Only called on non-input layers
void Layer::feedForward(){
    for (unsigned i = 0; i < neurons.size(); i++){
        neurons[i].feedForward();
    }
}

int Layer::size(){
    return neurons.size();
}