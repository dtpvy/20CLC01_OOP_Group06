#pragma once
#ifndef _light_h
#define _light_h
#include "point.h"
#include "console.h"
#define greenLight 40
#define redLight 20

class light: public point
{
private:
	bool _status;
	int _time;
public:
	light();
	bool getStatus();
	int getTime();
	void set(bool status, int time);
	void changeStatus();
	void updateTime();
	void draw();
	void writeFile(fstream& fo);
	void deleteChar();
};


#endif // !_light_h


