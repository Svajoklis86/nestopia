////////////////////////////////////////////////////////////////////////////////////////
//
// Nestopia - NES/Famicom emulator written in C++
//
// Copyright (C) 2003-2008 Martin Freij
//
// This file is part of Nestopia.
//
// Nestopia is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// Nestopia is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Nestopia; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
////////////////////////////////////////////////////////////////////////////////////////

#ifndef NST_MANAGER_IMAGEDATABASE_H
#define NST_MANAGER_IMAGEDATABASE_H

#pragma once

namespace Nestopia
{
	namespace Window
	{
		class ImageDatabase;
	}

	namespace Managers
	{
		class ImageDatabase : Manager
		{
		public:

			ImageDatabase(Emulator&,const Configuration&,Window::Menu&,const Paths&);
			~ImageDatabase();

			void Save(Configuration&) const;

		private:

			void OnCmdImagedatabase(uint);
			void OnEmuEvent(Emulator::Event,Emulator::Data);

			Object::Heap<Window::ImageDatabase> dialog;
		};
	}
}

#endif
