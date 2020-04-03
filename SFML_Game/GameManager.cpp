#include "GameManager.h"
#include <box2d/b2_world.h>

// Constructor
GameManager::GameManager()
{
	b2Vec2 gravity(0.0f, -10.0f);
	game_world_ = b2World{gravity};
}
