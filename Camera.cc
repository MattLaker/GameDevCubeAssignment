#include "Camera.h"

Camera::Camera(){

}

Camera::~Camera(){

}

glm::mat4 Camera::getViewMatrix(){
	//return glm::mat4;
return glm::mat4(
             glm::vec4(1.0, 0.0, 0.0, 0.0),
             glm::vec4(0.0, 1.0, 0.0, 0.0),
             glm::vec4(0.0, 0.0, 1.0, 0.0),
             glm::vec4(3.0, 0.0, 0.0, 1.0)
           );
}

//void Camera::move_x(int x){
//}
