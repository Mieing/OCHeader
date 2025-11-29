@class NSString, IESECYataInstanceUtil;

@interface IESECSliceAbility : IESECBaseAbility <IESECSliceAbilityProtocol>

@property (retain) IESECYataInstanceUtil *yataUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
