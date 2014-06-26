#ifndef		__DATA_HH__
#define		__DATA_HH__

#include	"../vbam/gba/Globals.h"
#include	"PokemonUtils.hh"
#include	"Team.hpp"

class		Data
{
public:
  Data();
  ~Data();

public:
  void		update();

public:
  char		**names() const { return (_names); }
  char		*name(uint8_t i) const { return (_names[(i <= 151) * i]); }
  Team		&playerTeam() { return (_pteam); }
  Team		&enemyTeam() { return (_eteam); }

private:
  void		_loadNames();

private:
  // Static
  char		**_names;
  // Dynamic
  Team		_pteam;
  Team		_eteam;
};

#endif