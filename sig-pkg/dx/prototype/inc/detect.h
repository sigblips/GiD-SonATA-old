/*******************************************************************************

 File:    detect.h
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

/**********************************************************************
**
** $Source: /home/cvs/nss/sonata-pkg/dx/prototype/inc/detect.h,v $
**
** Signal detection task
**
** $Header: /home/cvs/nss/sonata-pkg/dx/prototype/inc/detect.h,v 1.1.1.1 2006/08/02 05:29:54 kes Exp $
** $Log: detect.h,v $
** Revision 1.1.1.1  2006/08/02 05:29:54  kes
** pdm-1_59
**
** Revision 1.1  2001/11/09 04:32:33  kes
** *** empty log message ***
**
 * Revision 1.1  98/10/29  11:30:55  kes
 * Initial revision
 * 
**********************************************************************/

#ifndef _DETECT_H
#define _DETECT_H

#include "nss.h"
#include "buffer.h"
#include "nssmsg.h"
#include "obs.h"
#include "queue.h"

// detection task information structure
typedef struct detect_info_t {
	queue_t **recvQ;					// receive queue
	queue_t **sendQ;					// send queue
	queue_t **readQ;					// read task input queue
	queue_t **dataQ;					// data queue
} detect_info_t;

// function prototypes
task_t DetectionTask(void *arg);

#endif
