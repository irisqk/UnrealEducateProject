// it just a learning project copy by GAS write by chuqingkun,if you like it you also can study it

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract)
class UNREALEDUCATEPROJECT_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AAuraCharacterBase();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

	







	
//do not need to tick event and input event,it just a character base class ,that one will implementation in player character class and NPC character class
// public:	
// 	// Called every frame
// 	virtual void Tick(float DeltaTime) override;
//
// 	// Called to bind functionality to input
// 	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
