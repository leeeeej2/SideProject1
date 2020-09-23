// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EscapeRoomHUD.generated.h"

UCLASS()
class AEscapeRoomHUD : public AHUD
{
	GENERATED_BODY()

public:
	AEscapeRoomHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

