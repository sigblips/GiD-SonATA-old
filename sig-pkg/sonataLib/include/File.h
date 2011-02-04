/*******************************************************************************

 File:    File.h
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
// File connection class
//
// $Header: /home/cvs/nss/sonata-pkg/sonataLib/include/File.h,v 1.2 2008/02/25 22:35:23 kes Exp $
//
#ifndef _FileH
#define _FileH

#include "Connection.h"

namespace sonata_lib {

//
// Write to a file as a connection class; at present, it is
// possible to specify input from a file
//
class File: public Connection {
public:
	File(string name_, string filename_);
	~File();

	Error establish();
	Error terminate();

	Error send(void *msg_, size_t len_ = 1);
private:
	string filename;

	// forbidden
	File(const File&);
	File& operator=(const File&);
};

}

#endif