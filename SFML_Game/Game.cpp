#include "Game.h"

#include <SFML/Window.hpp>

using namespace sf;

void configure_window(Window* window)
{
	//const auto default_window_size = Vector2u(50, 50);
	const Vector2u default_window_size(600, 600);

	window->setSize(default_window_size);
	
}

void Game::start()
{
	sf::Window window(sf::VideoMode(800, 600), "Main Window", Style::Titlebar | Style::Close);
	//Window* window = new Window(VideoMode(800, 600), "Main Window");

	configure_window(&window);

	// Run program while window is open
	while (window.isOpen())
	{
		// Check window's events that were triggered since loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			// Mouse pressed event
			if (event.type == sf::Event::MouseButtonPressed)
			{
				printf("Mouse clicked\n");
				printf("Mouse event: %d\n", event.mouseButton.button);
				printf("Mouse x:%d\n", event.mouseButton.x);
				printf("Mouse y:%d\n", event.mouseButton.y);

				// Left Click
				if (event.mouseButton.button == 0)
				{
					
				}

				// Right click
				if (event.mouseButton.button == 1)
				{
					
				}
			}


		}
	}

}
