// Copyright 2002-2004 Frozenbyte Ltd.

// from 2050

#define GS_CMD_BASE 2050

GS_CMD(0, GS_CMD_CREATEDECOR, "createDecor", NONE)
GS_CMD(1, GS_CMD_SETDECORNAME, "setDecorName", STRING)
GS_CMD(2, GS_CMD_SETDECORPOSITION, "setDecorPosition", STRING)
GS_CMD(3, GS_CMD_SETDECORHEIGHT, "setDecorHeight", STRING)
GS_CMD(4, GS_CMD_STRETCHDECOR, "stretchDecor", NONE)
GS_CMD(5, GS_CMD_LOADDECORMODEL, "loadDecorModel", STRING)
GS_CMD(6, GS_CMD_ENABLEDECOREFFECT, "enableDecorEffect", STRING)
GS_CMD(7, GS_CMD_DISABLEDECOREFFECT, "disableDecorEffect", STRING)
GS_CMD(8, GS_CMD_SETDECORENDPOSITION, "setDecorEndPosition", STRING)
GS_CMD(9, GS_CMD_SETDECORPOSITIONTOPOSITION, "setDecorPositionToPosition", NONE)
GS_CMD(10, GS_CMD_SETDECORHEIGHTTOVALUE, "setDecorHeightToValue", NONE)
GS_CMD(11, GS_CMD_GETDECORBYNAME, "getDecorByName", STRING)
GS_CMD(12, GS_CMD_SYNCALLDECORS, "syncAllDecors", NONE)
GS_CMD(13, GS_CMD_SETDECORROTATIONTOVALUE, "setDecorRotationToValue", NONE)
GS_CMD(14, GS_CMD_SETDECORNOSHADOW, "setDecorNoShadow", NONE)
GS_CMD(15, GS_CMD_SETDECORSPEED, "setDecorSpeed", STRING)

GS_CMD_SIMPLE(16, getDecorById, NONE)
GS_CMD_SIMPLE(17, getDecorId, NONE)

#undef GS_CMD_BASE

// up to 2099