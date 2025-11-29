@class NSString;

@interface AWEHPChannelCommunicationAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelCommunicationAbility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCommunicationObjectByProtocol:(id)a0;

@end
