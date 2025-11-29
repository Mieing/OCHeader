@class NSString, AWENormalModeTabBarItemChannelObject;

@interface AWEHPBottomChannelBaseAbilityImpl : NSObject <AWEHPBottomChannelBaseAbility>

@property (weak, nonatomic) AWENormalModeTabBarItemChannelObject *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelDidUnloadWithReloadType:(unsigned long long)a0;
- (void)channelDidSelected;
- (void).cxx_destruct;

@end
