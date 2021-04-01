#pragma once
class pacman
{
private:
	float posicionX;
	float posicionY;
	int color;
	float velocidadX;
	float velocidadY;
public:
	void move(float _velocidadX, float _velocidadY);
};



class pacman {
public:
	int x, y;
	bool cc;
	direccion dir;
	pacman(int xx, int yy, direccion d) { x = xx; y = yy; dir = d; }
	void dibujar();
};


class fantasma {
public:
	int x, y;
	int color;
	bool levantado; //si pacman es invencible y lo levanto
	fantasma(int xx, int yy, int c) { x = xx; y = yy; color = c; levantado = false; }
	void direccionar();
	void randomizar_();
	void dibujar();
};

fuen
