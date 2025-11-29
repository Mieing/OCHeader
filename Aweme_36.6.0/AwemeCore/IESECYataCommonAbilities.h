@class NSString;
@protocol IESECTimerAbilityProtocol, IESECTrackAbilityProtocol, IESECUiAbilityProtocol, IESECOperationAbilityProtocol, IESECYataAbilityProtocol, IESECUtilsAbilityProtocol, IESECSliceAbilityProtocol;

@interface IESECYataCommonAbilities : NSObject <IESECYataCommonAbilityProtocol>

@property (retain, nonatomic) id<IESECOperationAbilityProtocol> operationAbility;
@property (retain, nonatomic) id<IESECTrackAbilityProtocol> trackerAbility;
@property (retain, nonatomic) id<IESECTimerAbilityProtocol> timerAbility;
@property (retain, nonatomic) id<IESECUiAbilityProtocol> uiAbility;
@property (retain, nonatomic) id<IESECUtilsAbilityProtocol> utilsAbility;
@property (retain, nonatomic) id<IESECYataAbilityProtocol> yataAbility;
@property (retain, nonatomic) id<IESECSliceAbilityProtocol> sliceAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
