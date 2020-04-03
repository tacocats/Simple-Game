#pragma once
#include <box2d/b2_world.h>

class GameManager
{
private:
	// Default to 0, 0 gravity if not specified
	b2World game_world_ = b2World(b2Vec2(0,0));

public:
	GameManager();
};

