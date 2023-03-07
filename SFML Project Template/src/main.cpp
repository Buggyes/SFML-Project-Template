#include <SFML/Graphics.hpp>

int main() {
	sf::Texture texture;
	if (!texture.loadFromFile("src/Sprites/Hard.png")) {
		return EXIT_FAILURE;
	}
	sf::Sprite sprite(texture);
	sf::RenderWindow window(sf::VideoMode(700, 400), "This image goes hard feel free to screenshot");
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			window.clear();
			window.draw(sprite);
			window.display();
		}
	}
	return 0;
}