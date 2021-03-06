#ifndef _loadout_h_
#define _loadout_h_

//////////////////////////////////////////////////////////////////////////////
//
// Loadout
//
//////////////////////////////////////////////////////////////////////////////

class Loadout : public Screen {
public:
    virtual void   UpdateHullType(void)      = 0;
    virtual Pane*  GetPane()             = 0;
};

//////////////////////////////////////////////////////////////////////////////
//
// Constructor
//
//////////////////////////////////////////////////////////////////////////////

TRef<Loadout> CreateLoadout(Modeler* pmodeler, Number* ptime);

#endif
