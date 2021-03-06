/**************************************************************************\
 * 
 *  FILE: Int32Record.h
 *
 *  This source file is part of DIME.
 *  Copyright (C) 1998-1999 by Systems In Motion.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License, version 2, as
 *  published by the Free Software Foundation.
 *
 *  This library is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License (the accompanying file named COPYING) for more
 *  details.
 *
 **************************************************************************
 *
 *  If you need DIME for a non-GPL project, contact Systems In Motion
 *  to acquire a Professional Edition License:
 *
 *  Systems In Motion                                   http://www.sim.no/
 *  Prof. Brochs gate 6                                       sales@sim.no
 *  N-7030 Trondheim                                   Voice: +47 22114160
 *  NORWAY                                               Fax: +47 67172912
 *
\**************************************************************************/

#ifndef DIME_INT32RECORD_H
#define DIME_INT32RECORD_H

#include <dime/records/Record.h>

class DIME_DLL_API dimeInt32Record : public dimeRecord
{
public:
  dimeInt32Record(const int group_code = 90, const int32 val = 0);

  virtual dimeRecord *copy(dimeMemHandler * const mh) const;
  virtual void setValue(const dimeParam &param, dimeMemHandler * const memhandler = NULL);
  virtual void getValue(dimeParam &param) const;
  
  int32 getValue() const;
  void setValue(const int32 val);

public:
  int typeId() const;
  bool read(dimeInput * const in);
  bool write(dimeOutput * const out);
  
private:
  int32 value;
  
}; // class dimeInt32Record

#endif // ! DIME_INT32RECORD_H

