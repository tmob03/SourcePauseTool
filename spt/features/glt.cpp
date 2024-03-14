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
	DECL_HOOK_THISCALL(void, GaussSecondaryAttack, void*);

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
	if (spt_generic.ORIG_DoImageSpaceMotionBlur)
	HOOK_FUNCTION(server, GaussSecondaryAttack);
}

void GLTHud::LoadFeature() {}

void GLTHud::UnloadFeature() {}

IMPL_HOOK_THISCALL(GLTHud, void, GaussSecondaryAttack, void*) {
	glt_hud.chargeStartTime = *spt_generic.pgpGlobals + 12;
	Msg("The charge is: %f\n", (200 * ((*spt_generic.pgpGlobals + 12) - (glt_hud.chargeStartTime + 4)) / 4) * 5);
	glt_hud.ORIG_GaussSecondaryAttack(thisptr);
}

#endif
*/