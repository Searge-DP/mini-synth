#pragma once

#include "Menu.h"

namespace Menu
{
	class Chorus : public Menu
	{
	public:
		enum Item
		{
			TITLE,
			WET_DRY_MIX,
			DEPTH,
			FEEDBACK,
			FREQUENCY,
			WAVEFORM,
			DELAY,
			PHASE,
			COUNT
		};

		// constructor
		Chorus(COORD pos, const char *name, int count)
			: Menu(pos, name, count)
		{
		}

	protected:
		virtual void Update(int index, int sign, DWORD modifiers);
		virtual void Print(int index, HANDLE hOut, COORD pos, DWORD flags);
	};

	extern Chorus menu_fx_chorus;
}
