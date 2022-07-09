#include <vcruntime.h>
#ifndef VECTOR_HPP
#define VECTOR_HPP
template <typename T, unsigned short int size> struct Vector {
  T values[size];
  Vector(T val) {
    for (int i = 0; i < size; i++) {
      values[i] = val;
    }
  }
  void operator=(Vector const &vec) {
    for (int i = 0; i < size; i++) {
      values[i] = vec.values[i];
    }
  }
  bool operator==(Vector const &vec) {
    bool val = false;
    for (int i = 0; i < size; i++) {
      val = values[i] == vec.values[i];
    }
    return val;
  }
};

#endif