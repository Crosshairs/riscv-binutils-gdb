/* This testcase is part of GDB, the GNU debugger.

   Copyright 1998, 1999 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
 
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   Please email any bugs, comments, and/or additions to this file to:
   bug-gdb@prep.ai.mit.edu  */

template<class T> T add2(T v1, T v2)
{
   T v3;
   v3 = v1;
   v3 += v2;
   return v3;
}

void subr2()
{
  char c;
  int i;
  float f;
  
  c = 'b';
  i = 3;
  f = 6.5;

  c = add2(c, c);
  i = add2(i, i);
  f = add2(f, f);
}
