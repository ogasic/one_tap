//
// Created by ognjen-gasic on 2/14/26.
//

#include "mathutil.h"

struct Vector3D{

  float x, y, z;

  Vector3D() = default;

  Vector3D(float a, float b, float c){
    x = a;
    y = b;
    z = c;
  }
  float& operator[](int i){
    return ((&x)[i]);
  }
  const float& operator [](int i){
    return ((&x)[i]);
  }

};





inline float dot_product(const Vector3D& vec1,const Vector3D& vec2) {
    return vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z;
}
