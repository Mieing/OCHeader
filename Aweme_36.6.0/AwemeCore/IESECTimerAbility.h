@class NSString;

@interface IESECTimerAbility : IESECBaseAbility <IESECTimerAbilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)delayWithTime:(long long)a0 callback:(id /* block */)a1;

@end
