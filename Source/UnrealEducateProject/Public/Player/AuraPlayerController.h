// it just a learning project copy by GAS write by chuqingkun,if you like it you also can study it

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "AuraPlayerController.generated.h"


class UInputMappingContext;
/**
 * 
 */
UCLASS()
class UNREALEDUCATEPROJECT_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAuraPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere,Category="Input")	
	TObjectPtr<UInputMappingContext> AuraContext;
};
