// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "SemesterProjectSixHUD.generated.h"

UCLASS()
class ASemesterProjectSixHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASemesterProjectSixHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

