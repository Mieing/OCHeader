@interface AWEHPChannelPublicPrePluginRegisterList : AWEHPChannelBasePluginRegisterList

+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPadTabBarAdapterClass;
+ (Class)aAWEHPPluginControllersAdapterClass;
+ (Class)aAWENormalModeTabBarPluginClassAdapterClass;
+ (id)sharedInstance;

- (id)aAWEPadSplitScreenAdapter;
- (id)aAWEPadTabBarAdapter;
- (id)aAWEHPPluginControllersAdapter;
- (id)aAWENormalModeTabBarPluginClassAdapter;
- (void)setup;

@end
