@class AWETeenModeTabBarItemChannelObject, NSString;
@protocol AWETeenModeTabBarItemConfigCallProtocol;

@interface AWETeenModeTabBarItemConfigAbilityProxy : NSObject <AWETeenModeTabBarItemConfigAbilityProxyProtocol>

@property (weak, nonatomic) id<AWETeenModeTabBarItemConfigCallProtocol> target;
@property (weak, nonatomic) AWETeenModeTabBarItemChannelObject *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showBackgroundImagesWithProgress:(double)a0;
- (void).cxx_destruct;

@end
