#ifndef GAMEASSET_H
#define GAMEASSET_H

#include <iostream>

#include <GL/gl.h>

class GameAsset {
 public:
  GameAsset();
  virtual void Draw(GLuint) = 0;
  void translate(float x, float y, float z);

 private:
  std::shared_ptr <glm::mat4> model_matrix;
};

#endif
