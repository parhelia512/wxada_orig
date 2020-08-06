// wxcore_activateevent.cc
// 
// Copyright © 2005 Luke A. Guest
//
// Distributed under the wxWidgets Licence
//
// Implements a wrapper around the wxActivateEvent class.

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>


#ifdef __BORLANDC__
    #pragma hdrstop
#endif


// For all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWindows headers)
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif


extern "C"
	{
	wxActivateEvent *wxActivateEvent_ctor(int EventType, int Active, int id)
		{
		return new wxActivateEvent(EventType, Active == 1 ? true : false, id);
		}
	
	void wxActivateEvent_dtor(wxActivateEvent *Self)
		{
		delete Self;
		}
	
	int wxActivateEvent_GetActive(wxActivateEvent *Self)
		{
		return Self->GetActive() == true ? 1 : 0;
		}
	};
