#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		static const int NUM_HORSES = 5;
		Horse horses[NUM_HORSES];
		int trackLength;

	public:
		Race(int trackLength);
		void runRace();
};

#endif
