#include "Display.hpp"


//////////////////////////////////// Display::Display /////////////////////////////////
//
// Creador de un display.
//
//////////////////////////////////////////////////////////////////////////////////////
Display::Display (float displayWidth, float displayHeight)
{	
    if (display = al_create_display(displayWidth, displayHeight))	//si se creo con exito, indicarlo
		valid = true;
	else //si hubo error en la creacion del display, indicarlo
		valid = false;
}


Display::~Display()
{
    al_destroy_display(display);
}

////////////////////////////// Display::drawBacground ////////////////////////////////
//
// Dibuja el fondo de la pantalla del juego. (El escenario).
//
//////////////////////////////////////////////////////////////////////////////////////
void Display::drawBackground()
{
	al_draw_filled_rectangle (0, 0, al_get_display_width(display), al_get_display_height(display), al_map_rgb(120, 45, 55));
}

////////////////////////////// Display::isValid //////////////////////////////////////
//
// Indica si se pudo crear con el exito el display
//
//////////////////////////////////////////////////////////////////////////////////////
bool Display::isValid()
{
	return valid;
}

////////////////////////////// Display::showChanges ///////////////////////////////////
//
// Se muestran en pantalla los cambios del display
//
//////////////////////////////////////////////////////////////////////////////////////
void Display::showChanges()
{
	al_flip_display();
}

////////////////////////////// Display::getDisplay ///////////////////////////////////
//
// Getter del puntero al display.
//
//////////////////////////////////////////////////////////////////////////////////////
ALLEGRO_DISPLAY* Display::getDisplay()
{
	return display;
}

float Display::getDisplayWidth()
{
	return al_get_display_width(display);
}

float Display::getDisplayHeight()
{
	return al_get_display_height(display);
}