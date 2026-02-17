//
// Created by ognjen-gasic on 2/14/26.
//

#ifndef OPENGLAPP_MATHUTIL_H
#define OPENGLAPP_MATHUTIL_H
#include <cmath>

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
  Vector3D& operator*=(float s) {
    x *= s;
    y *= s;
    z *= s;
    return (*this);
}

Vector3D& operator/=(float s) {
    s = 1.0f / s;
    x *= s;
    y *= s;
    z *= s;
    return (*this);
}
};

inline Vector3D operator *(const Vector3D& v, float s){
  return (Vector3D(v.x * s, v.y * s, v.z * s));
}


inline float dot_product(const Vector3D& vec1,const Vector3D& vec2) {
    return vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z;
}

inline Vector3D operator/(const Vector3D& v, float s) {
    s = 1.0f / s;
    return (Vector3D(v.x * s, v.y * s, v.z * s));
}

inline Vector3D operator-(const Vector3D& v) {
    return (Vector3D(-v.x, -v.y, -v.z));
}

inline float Magnitude(const Vector3D& v) {
    return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}

inline Vector3D Normalize(const Vector3D& v) {
    return (v / Magnitude(v));
}

#endif //OPENGLAPP_MATHUTIL_H
