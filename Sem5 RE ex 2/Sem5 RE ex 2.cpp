// Sem5 RE ex 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{

	SYSTEMTIME s;
	GetSystemTime(&s);
	if (s.wYear == 2018) {
		if (s.wMinute > 10) {
			if (s.wHour > 12) {
				while (!(s.wHour == s.wMinute)) {
					if(!(s.wHour<=s.wMinute))s.wMinute -= s.wHour;
					else s.wHour -= s.wMinute;
				}
				if (!(s.wMinute == 1))MessageBoxA(NULL, "ALL OK", "ALL OK", NULL);
			}
		}
	}
    return 0;
}

