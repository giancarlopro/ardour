/*
    Copyright (C) 1998-99 Paul Barton-Davis 
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
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/

#ifndef __midi_factory_h__
#define __midi_factory_h__

#include <vector>
#include <string>

#include <midi++/port.h>
#include <midi++/port_request.h>

namespace MIDI {

class PortFactory {
  public:
	Port *create_port (PortRequest &req);

	static bool ignore_duplicate_devices (Port::Type);
	static int get_known_ports (std::vector<PortSet>&);
	static std::string default_port_type ();
};

} // namespace MIDI

#endif // __midi_factory_h__
