#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

	
	sf::Font font;

font.loadFromFile("polices/digital.ttf");   // la police d'ecriture


	sf::RenderWindow window(sf::VideoMode(LARGEUR, HAUTEUR), "Jeux");
	 sf::RectangleShape fond(sf::Vector2f(LARGEUR,HAUTEUR));
	fond.setTexture(&img);

	sf::Texture img;
	img.setRepeated(true);
	img.loadFromFile("images/image.jpg");   // fond d'ecran

	sf::Text choix2;
	jouer.setFont(font);
	jouer.setCharacterSize(60);
	jouer.setColor(sf::Color::Red);
	jouer.setPosition(LARGEUR/2,HAUTEUR-HAUTEUR/2);
	jouer.setString("Jouer");

		bool choix=true;
		
		 sf::Vector2i positionSouris;
		 
		 	do{
				window.clear();
				positionSouris = sf::Mouse::getPosition(window);
                int mouseY = positionSouris.y;
				if (mouseY>HAUTEUR/2-HAUTEUR/20 && mouseY<HAUTEUR/2+HAUTEUR/20 && mousex<LARGEUR/2+LARGEUR/20  && mouseY>LARGEUR/2-LARGEUR/20)	// si la souris est sur "jouer"
				{
						jouer.setCharacterSize(100);					//on met le texte en evidence				
						jouer.setPosition(LARGEUR/4,HAUTEUR/2);
				}
				else
				{
						jouer.setCharacterSize(60);						//sinon on l'affiche normalement
						jouer.setPosition(LARGEUR/2,HAUTEUR-HAUTEUR/2);
				}
				
	window.draw(fond);			// on affiche le fond d'ecran
	window.draw(jouer);			//on affiche le texte
	window.display();			
	if (event.type == sf::Event::MouseButtonPressed)
	{
    if (event.mouseButton.button == sf::Mouse::Left)	// si on appui sur le bouton gauche de la souris
    {
         if (event.mouseButton.y>HAUTEUR/2-HAUTEUR/20 && event.mouseButton.y<HAUTEUR/2+HAUTEUR/20 && event.mouseButton.x<LARGEUR/2+LARGEUR/20  && event.mouseButton.y>LARGEUR/2-LARGEUR/20)
		 {		// si on appuie sur le texte

			choix=false;
				//action  (menu choix )
		 }
    }
	}
	        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
}while (choix);
	
	
	
	
	
	
	
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
