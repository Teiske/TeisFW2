#ifndef SCENE_H
#define SCENE_H

// Include standard headers
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/euler_angles.hpp>

#include <common/sprite.h>

class Scene {
 
	public:
		 Scene();
		 virtual ~Scene();

		 float rot_z = 0.0f;

		 Sprite* _pencils;
		 //Sprite* pencils() { return _pencils; };

	 //private:
		 //Sprite* _pencils = new Sprite("assets/pencils.tga");
		 Sprite* kingkong = new Sprite("assets/kingkong.tga");
		 Sprite* rgba = new Sprite("assets/rgba.tga");
	 
};

#endif /* SCENE_H */