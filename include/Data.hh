#ifndef		__DATA_HH__
#define		__DATA_HH__

#include	"../vbam/gba/Globals.h"
#include	"PokemonUtils.hh"
#include	"World.hh"
#include	"Team.hpp"
#include	"Player.hh"

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
  World		&world() { return (_world); }
  Player	&player() { return (_player); }

private:
  void		_loadNames();

private:
  // Static
  char		**_names;
  World		_world;
  // Dynamic*
  Player	_player;
  Team		_pteam;
  Team		_eteam;
};

#endif
