/*******************************************************************************

 File:    Semaphore.h
 Project: OpenSonATA
 Authors: The OpenSonATA code is the result of many programmers
          over many years

 Copyright 2011 The SETI Institute

 OpenSonATA is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 OpenSonATA is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with OpenSonATA.  If not, see<http://www.gnu.org/licenses/>.
 
 Implementers of this code are requested to include the caption
 "Licensed through SETI" with a link to setiQuest.org.
 
 For alternate licensing arrangements, please contact
 The SETI Institute at www.seti.org or setiquest.org. 

*******************************************************************************/

//
// Counting semaphore class
//
// $Header: /home/cvs/nss/sonata-pkg/sonataLib/include/Semaphore.h,v 1.3 2008/11/18 23:23:03 kes Exp $
//
#ifndef _SemaphoreH
#define _SemaphoreH

#include <pthread.h>
#include <semaphore.h>
#include <string>
#include "Err.h"

using std::string;

namespace sonata_lib {

class Semaphore {
public:
	Semaphore(string name_, int count_ = 1);
	~Semaphore();

	Error wait(int milliseconds_ = -1);
	void signal();
	void name(string& name_);
	int32_t getCount();

private:
	sem_t sem;
	string sname;

	// forbidden
	Semaphore(const Semaphore&);
	Semaphore& operator=(const Semaphore&);
};

}

#endif