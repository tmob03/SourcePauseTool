#include "stdafx.hpp"
/*
#if !defined(BMS)
#include "..\feature.hpp"
#include "game_detection.hpp"
#include "generic.hpp"

namespace patterns 
{
	PATTERNS(GaussSecondaryAttack,
	        "Steam",
	        "55 8B EC 81 EC 8C 00 00 00 56 57 8B F1 E8 ?? ?? ?? ?? 8B F8 85 FF");
	PATTERNS(
	    GaussSecondaryAttack_client,
	    "Steam",
	    "55 8B EC 83 EC 28 53 56 8B D9 E8 ?? ?? ?? ?? 8B F0 85 F6 0F 84 ?? ?? ?? ?? 8B 16 8B CE 8B 92 ?? ?? ?? ?? FF D2 84 C0 0F 84 ?? ?? ?? ?? 6A 00 68 ?? ?? ?? ?? 68");
}

// Show HLS GLT boost speed
class GLTHud : public FeatureWrapper<GLTHud>
{
public:
protected:
	virtual bool ShouldLoadFeature() override;

	virtual void InitHooks() override;

	virtual void LoadFeature() override;

	virtual void UnloadFeature() override;
	virtual void PreHook() override;
	DECL_HOOK_THISCALL(void, GaussSecondaryAttack, void*);
	DECL_HOOK_THISCALL(void, GaussSecondaryAttack_client, void*);

private:
	float chargeStartTime;
};

static GLTHud glt_hud;

bool GLTHud::ShouldLoadFeature()
{
	if (utils::DoesGameLookLikeHLS)
		return true;
	return false;
}

void GLTHud::InitHooks()
{
	HOOK_FUNCTION(server, GaussSecondaryAttack);
	HOOK_FUNCTION(client, GaussSecondaryAttack_client)
	Msg("ITS IS HOOKED!!!!!!!!!!!\n\n\n\n\n\n\n\n");
}

void GLTHud::PreHook()
{

	
}

void GLTHud::LoadFeature() {}

void GLTHud::UnloadFeature() {}

IMPL_HOOK_THISCALL(GLTHud, void, GaussSecondaryAttack, void*) {
	glt_hud.chargeStartTime = (float)*spt_generic.pgpGlobals + 12;
	Msg("The charge is: %f\n", (200 * ((*spt_generic.pgpGlobals + 12) - (glt_hud.chargeStartTime + 4)) / 4) * 5);
	glt_hud.ORIG_GaussSecondaryAttack(thisptr);
}
IMPL_HOOK_THISCALL(GLTHud, void, GaussSecondaryAttack_client, void*)
{
	glt_hud.chargeStartTime = *spt_generic.pgpGlobals + 12;
	Msg("The charge is: %f\n", (200 * ((*spt_generic.pgpGlobals + 12) - (glt_hud.chargeStartTime + 4)) / 4) * 5);
	glt_hud.ORIG_GaussSecondaryAttack(thisptr);
}


#endif*/