//
// Created by ggkos on 11/14/2023.
//

#include <iostream>
#include <utility>
#include "Box.h"

int Box::getDimX() const {
    return dimX;
}

void Box::setDimX(int iDimX) {
    Box::dimX = iDimX;
}

int Box::getDimY() const {
    return dimY;
}

void Box::setDimY(int iDimY) {
    Box::dimY = iDimY;
}

int Box::getDimZ() const {
    return dimZ;
}

void Box::setDimZ(int iDimZ) {
    Box::dimZ = iDimZ;
}

int Box::getWeight() const {
    return weight;
}

void Box::setWeight(int iWeight) {
    Box::weight = iWeight;
}

int Box::getDurability() const {
    return durability;
}

void Box::setDurability(int iDurability) {
    Box::durability = iDurability;
}

const std::string &Box::getName() const {
    return name;
}

void Box::setName(const std::string &iName) {
    Box::name = iName;
}

const std::string &Box::getMaterial() const {
    return material;
}

void Box::setMaterial(const std::string &iMaterial) {
    Box::material = iMaterial;
}

const std::string &Box::getDesc() const {
    return desc;
}

void Box::setDesc(const std::string &iDesc) {
    Box::desc = iDesc;
}

Box::~Box() {
    std::cout<<"Box with name " << this->name << " is pending deletion." <<std::endl;
}

Box::Box(int dimX, int dimY, int dimZ, int weight, int durability, std::string name, std::string material,
         std::string desc) : dimX(dimX), dimY(dimY), dimZ(dimZ), weight(weight), durability(durability),
                                    name(std::move(name)), material(std::move(material)), desc(std::move(desc)) {}
