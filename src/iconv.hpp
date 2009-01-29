//  $Id$
// 
//  TinyGetText - A small flexible gettext() replacement
//  Copyright (C) 2007 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef HEADER_ICONV_HPP
#define HEADER_ICONV_HPP

#include <string>
#include <iconv.h>

namespace tinygettext {

class IConv
{
private:
  std::string to_charset;
  std::string from_charset;
  iconv_t cd;

public:
  IConv();
  IConv(const std::string& fromcode, const std::string& tocode);
  ~IConv();

  std::string convert(const std::string& text);

private:
  IConv (const IConv&);
  IConv& operator= (const IConv&);
};

} // namespace tinygettext

#endif

/* EOF */
