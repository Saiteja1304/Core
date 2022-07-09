#ifndef VECTORF_HPP
#define VECTORF_HPP
// Vector2
struct Vector2 {
  float x, y;
  Vector2() {}
  Vector2(float val) { x = y = val; }
  Vector2(float val, float val2) {
    x = val;
    y = val2;
  }
  void operator=(Vector2 const &vec2) {
    x = vec2.x;
    y = vec2.y;
  }
  Vector2 operator+(Vector2 const &vec4) {
    return Vector2(x + vec4.x, y + vec4.y);
  }
  Vector2 operator-(Vector2 const &vec4) {
    return Vector2(x - vec4.x, y - vec4.y);
  }
  Vector2 operator/(float const &val) { return Vector2(x / val, y / val); }
  bool operator==(Vector2 const &vec2) { return x == vec2.x && y == vec2.y; }
};

// Vector3
struct Vector3 {
  float x, y, z;
  Vector3() {}
  Vector3(float val, float val2, float val3) {
    x = val;
    y = val2;
    z = val3;
  }
  Vector3(float val) { x = y = z = val; }
  void operator=(Vector3 const &vec3) {
    x = vec3.x;
    y = vec3.y;
    z = vec3.z;
  }
  Vector3 operator+(Vector3 const &vec4) {
    return Vector3(x + vec4.x, y + vec4.y, z + vec4.z);
  }
  Vector3 operator-(Vector3 const &vec4) {
    return Vector3(x - vec4.x, y - vec4.y, z - vec4.z);
  }
  Vector3 operator/(float const &val) {
    return Vector3(x / val, y / val, z / val);
  }
  bool operator==(Vector3 const &vec3) {
    return (vec3.x == x) && (vec3.y == y) && (vec3.z == z);
  }
};

// Vector4
struct Vector4 {
  float x, y, z, w;
  Vector4() {}
  Vector4(float val, float val1, float val2, float val3) {
    x = val;
    y = val1;
    z = val2;
    w = val3;
  }
  Vector4(float val) { x = y = z = w = val; }
  void operator=(Vector4 const &vec4) {
    x = vec4.x;
    y = vec4.y;
    z = vec4.z;
    w = vec4.w;
  }
  Vector4 operator+(Vector4 const &vec4) {
    return Vector4(x + vec4.x, y + vec4.y, z + vec4.z, w + vec4.w);
  }
  Vector4 operator-(Vector4 const &vec4) {
    return Vector4(x - vec4.x, y - vec4.y, z - vec4.z, w - vec4.w);
  }
  Vector4 operator/(float const &val) {
    return Vector4(x / val, y / val, z / val, w / val);
  }
  bool operator==(Vector4 const &vec4) {
    return x == vec4.x && y == vec4.y && vec4.z == z && w == vec4.w;
  }
};
#endif