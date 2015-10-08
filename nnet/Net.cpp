#include <iostream>
#include <stdexcept>
#include "Net.h"

using namespace std;

Net::Net(const std::vector<unsigned> &topology){
    unsigned numLayers = topology.size();
    for (unsigned l = 0; l < numLayers; l++){
        unsigned numNeurons = topology[l];
        unsigned numOutputs = (l == numLayers - 1) ? 0 : topology[l + 1];
        Layer* _prevLayer;
        if (l > 0){
            _prevLayer = layers.back();
        } else {
            _prevLayer = NULL;
        }
        layers.push_back(new Layer(_prevLayer, numNeurons, numOutputs));
    }
}

void Net::feedForward(const std::vector<double> &input){
    if (input.size() + 1 != layers[0]->size()){
        throw std::invalid_argument("Input size doesn't match layer size");
    }
    for (unsigned i = 0; i < input.size(); i++){
        layers[0]->setNeuronOutput(i, input[i]);
    }
    for (unsigned l = 1; l < layers.size(); l++){
        layers[l]->feedForward();
    }
}

void Net::backProp(const std::vector<double> &target){

}

void Net::getResult(std::vector<double> &result) const {

}