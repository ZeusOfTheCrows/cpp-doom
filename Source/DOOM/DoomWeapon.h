// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoomWeapon.generated.h"

class UStaticMeshComponent;
class UPointLightComponent;

UCLASS()
class DOOM_API ADoomWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoomWeapon();

	UPROPERTY(Category = DoomCharacter, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true")) UStaticMeshComponent* weaponMesh;

	UPROPERTY(Category = DoomCharacter, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true")) UPointLightComponent* weaponLight;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnWeaponShoot();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponSettings) float rateOfFire = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponSettings) int maxAmmo = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponSettings) int currentAmmo = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponSettings) bool isSemiAuto = false;
	
private:

	float nextFire = -1;

public:

	bool Shoot();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "One weapon shoot")) void BPEVENT_OnWeaponShoot();

};
