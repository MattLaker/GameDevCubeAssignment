#pragma once

#include <memory>

#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera {
 public:
	Camera();
	virtual~Camera();
	glm::mat4 getViewMatrix();

// private:
//	std::unique_ptr<glm::mat4> view;


};

