@class NSString;

@interface IESECUiAbility : IESECBaseAbility <IESECUiAbilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToBottom:(id)a0;
- (void)scrollToPositionWithView:(id)a0 position:(id)a1;
- (void)scrollItemToPositionWithChildView:(id)a0 position:(id)a1;
- (void)scrollChildViewToCenter:(id)a0;
- (void)scrollToTop:(id)a0;

@end
