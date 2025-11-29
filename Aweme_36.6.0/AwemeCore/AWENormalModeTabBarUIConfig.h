@class NSString, AWEBizTabBarLightModeFlags, AWENormalModeTabBarController;

@interface AWENormalModeTabBarUIConfig : NSObject <AWEDigitalWellbeingMessage, AWEBasicModeMessage>

@property (retain, nonatomic) AWENormalModeTabBarController *tabBarController;
@property (retain, nonatomic) AWEBizTabBarLightModeFlags *defaultLightModeFlags;
@property (retain, nonatomic) AWEBizTabBarLightModeFlags *customLightModeFlags;
@property (retain, nonatomic) AWEBizTabBarLightModeFlags *forceLightModeFlags;
@property (nonatomic) BOOL isOnlyItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBizTabBarConfigCommonAdapterClass;
+ (id)sharedConfig;

- (void)reloadTabBarWithTabItemType:(long long)a0 reloadScene:(id)a1;
- (id)homePageContext;
- (id)aAWEBizTabBarConfigCommonAdapter;
- (void)didThemeChanged;
- (id)p_generateButtonTypeListWithButtonList:(id)a0;
- (void)updateTabBarAppearance;
- (void)resetTabBarStatus;
- (void)reloadChannelWithReloadScene:(id)a0;
- (void)recoverColdLaunchTabBarAllItemViewController;
- (void)reloadTabBarWithTabItemType:(long long)a0 reloadScene:(id)a1 sessionParams:(id)a2;
- (void)p_coldLaunchTabBarOnlyBuildItemViewController:(long long)a0 sessionParams:(id)a1 delayChannelCreate:(BOOL)a2 needDispatchChannelDidLoad:(BOOL)a3 landingModel:(id)a4;
- (void)recoverTabBarIfNeeded:(id)a0;
- (BOOL)recoverColdLaunchTabBarUI:(BOOL)a0;
- (void)coldLaunchTabBarOnlyBuildItemViewController;
- (void)switchInNormaModeWithReloadScene:(id)a0;
- (void)switchOutNormalModeWithReloadScene:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
