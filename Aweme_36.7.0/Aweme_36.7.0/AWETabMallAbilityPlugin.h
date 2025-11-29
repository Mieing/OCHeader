@class NSString;
@protocol AWEBizTabBarItemConfigProtocol, AWEHPChannelTopBarAbility, AWENormalModeTabBarItemConfigAbility;

@interface AWETabMallAbilityPlugin : NSObject <AWETabMallAbilityPluginProtocol>

@property (weak, nonatomic) id<AWEHPChannelTopBarAbility> topBarAbility;
@property (weak, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (weak, nonatomic) id<AWEBizTabBarItemConfigProtocol> bottomTabConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
