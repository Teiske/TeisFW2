#include <iostream>
#include <ostream>
#include <cstdio>

#include <common/scene.h>

Scene::Scene() {
	//_pencils  = new Sprite("assets/pencils.tga");
	//_kingkong = new Sprite("assets/kingkong.tga");
	//_rgba     = new Sprite("assets/rgba.tga");
	_triangle = new Sprite("assets/triangle.tga");
	_circle   = new Sprite("assets/circle.tga");
	_square   = new Sprite("assets/square.tga");

	//spritelist.push_back(_pencils);
	//spritelist.push_back(_kingkong);
	//spritelist.push_back(_rgba);
	spritelist.push_back(_triangle);
	spritelist.push_back(_circle);
	spritelist.push_back(_square);

	//_pencils-> setupSprite("assets/pencils.tga", 340, 360, 1.0f, 1.0f,/* 1.575f*/ 3.15f);
	//_kingkong->setupSprite("assets/kingkong.tga", 640, 360, 0.5f, 0.5f, 0.0f);
	//_rgba->    setupSprite("assets/rgba.tga", 940, 360, 1.0f, 1.0f, 0.0f);
	_triangle->setupSprite("assets/triangle.tga", 940, 360, 1.0f, 1.0f, 0.0f);
	_circle->  setupSprite("assets/circle.tga", 640, 360, 1.0f, 1.0f, 0.0f);
	_square->  setupSprite("assets/square.tga", 340, 360, 1.0f, 1.0f,/* 1.575f*/ 3.15f);

}

void Scene::updateScene() {
	//_rgba->rot(_rgba->rot() + 0.03f);
}


Scene::~Scene() {
	//delete _pencils;
	//delete _kingkong;
	//delete _rgba;
	delete _triangle;
	delete _circle;
	delete _square;
}

