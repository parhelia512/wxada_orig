// wxcore_windowdc.cc
// 
// Copyright © 2005 Luke A. Guest
//
// Distributed under the wxWidgets Licence
//
// Implements a wrapper around the wxWindowDC class.

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
	wxWindowDC *wxWindowDC_ctor(wxWindow *Window)
		{
		return new wxWindowDC(Window);
		}
	
	void wxWindowDC_dtor(wxWindowDC *Self)
		{
		delete Self;
		}
	};
