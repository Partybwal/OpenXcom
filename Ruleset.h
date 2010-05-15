/*
 * Copyright 2010 Daniel Albano
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM__RULESET_H
#define OPENXCOM__RULESET_H

#include <map>
#include <vector>
#include "SavedGame.h"
#include "RuleBaseFacility.h"
#include "RuleCraft.h"
#include "SoldierNamePool.h"

using namespace std;

class Ruleset
{
protected:
	vector<SoldierNamePool*> _names;
	map<LangString, RuleBaseFacility*> _facilities;
	map<LangString, RuleCraft*> _crafts;
public:
	Ruleset();
	~Ruleset();
	virtual SavedGame *newSave(GameDifficulty diff);
	RuleBaseFacility *getBaseFacility(LangString id);
	RuleCraft *getCraft(LangString id);
};

#endif