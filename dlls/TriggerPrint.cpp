#include "extdll.h"
#include "util.h"
#include "cbase.h"

class CTriggerPrint : public CBaseEntity
{
public:
	void Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value) override;
};

LINK_ENTITY_TO_CLASS(trigger_print, CTriggerPrint);

void CTriggerPrint::Use(
	CBaseEntity* pActivator, 
	CBaseEntity* pCaller, 
	USE_TYPE useType, 
	float value
) {
	//ALERT(at_console, "Hello World!\n");
	ALERT(at_console, "%s\n", STRING(pev->message));
	UTIL_SayText("Hey there!", pCaller);
}
