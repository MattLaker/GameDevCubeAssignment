#include "GameAsset.h"

GameAsset::GameAsset(){
	model_matrix = glm:mat4;
}

GameAsset::translate(float x, float y, float z){
//manipulate the model matrix to represent an x, y, z translation.
	model_matrix *= glm::mat4(
			 glm::vec4(1.0, 0.0, 0.0, 0.0),
             glm::vec4(0.0, 1.0, 0.0, 0.0),
             glm::vec4(0.0, 0.0, 1.0, 0.0),
             glm::vec4(x, y, z, 1.0)
}
