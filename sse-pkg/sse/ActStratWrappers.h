/*******************************************************************************

 File:    ActStratWrappers.h
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


#ifndef ActStratWrappers_H
#define ActStratWrappers_H

class Scheduler;
class Site;
class NssParameters;
class ActivityStrategy;

ActivityStrategy * NewObsActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

//JR - Tscope setup
ActivityStrategy * NewTscopeSetupActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

ActivityStrategy * NewAutoselectAntsActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

ActivityStrategy * NewPrepAntsActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

ActivityStrategy * NewFreeAntsActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

ActivityStrategy * NewBfInitActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

ActivityStrategy * NewBfResetActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

ActivityStrategy * NewBfAutoattenActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

ActivityStrategy * NewCalDelayActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

ActivityStrategy * NewCalPhaseActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

ActivityStrategy * NewCalFreqActStrategyWrapper(
   Scheduler *scheduler,
   Site *site,
   const NssParameters &nssParameters,
   int verboseLevel);

#endif