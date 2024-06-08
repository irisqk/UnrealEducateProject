// it just a learning project copy by GAS write by chuqingkun,if you like it you also can study it

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Character/AuraCharacterBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "AuraCharacter.generated.h"


/**
 * 
 */
UCLASS()
class UNREALEDUCATEPROJECT_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
	AAuraCharacter();
public:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="MyScenceComponent")
		USpringArmComponent* SpringArmComponent;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="MyScenceComponent")
		UCameraComponent* CameraComponent;
};
