#pragma once
class CLcalcul {
private:
	//Attributs
	double x, y;

public:
	//Methodes
	void placepoint(double a, double b);
	double distance(const CLcalcul& C);
};

