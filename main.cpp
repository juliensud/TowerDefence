#include <SFML/Graphics.hpp>
#define HAUTEUR (768)
#define LARGEUR (1024)
#define CARRE (LARGEUR/20)


int menuPrincipal(sf::RenderWindow & window)
{
		sf::Font font;



		sf::RectangleShape fond(sf::Vector2f(LARGEUR,HAUTEUR));
		sf::Texture img;
		img.setRepeated(true);
		img.loadFromFile("images/image.jpg");   // fond d'ecran
		fond.setTexture(&img);

		sf::Text jouer;
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
				 int mouseX = positionSouris.x;
				if (mouseY>HAUTEUR/2-HAUTEUR/20 && mouseY<HAUTEUR/2+HAUTEUR/20 && mouseX<LARGEUR/2+LARGEUR/20  && mouseX>LARGEUR/2-LARGEUR/20)	// si la souris est sur "jouer"
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

}




int main()
{



	sf::RenderWindow window(sf::VideoMode(LARGEUR, HAUTEUR), "Jeux");






    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.display();
    }

    return 0;
}
