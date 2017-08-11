/*
 * Copyright (C) 2017 Matthieu Gautier <mgautier@kymeria.fr>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * is provided AS IS, WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, and
 * NON-INFRINGEMENT.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

#ifndef ZIM_FILE_PART_H_
#define ZIM_FILE_PART_H_

#include <string>

namespace zim {

class FilePart {
  public:
    FilePart(const std::string& filename);
    const std::string& filename() const { return filename_; };

    std::size_t size() const { return size_; };
    bool fail() const { return size_ == 0; };
    bool good() const { return size_; };

  private:
    const std::string filename_;
    std::size_t size_;
};

};

#endif //ZIM_FILE_PART_H_
