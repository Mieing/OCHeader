@class AWENormalModeTabBarPlusButton, NSTimer, YYCache, NSDictionary, NSString;

@interface AWETabbarPlusScreenBurnManager : NSObject <AWEAppAwemeSettingMessage>

@property (retain, nonatomic) AWENormalModeTabBarPlusButton *plusButton;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL shouldShowDynamicIcon;
@property (retain, nonatomic) YYCache *dynamicIconCache;
@property (copy, nonatomic) NSDictionary *dynamicIconConfig;
@property (nonatomic) long long iconLocalVersion;
@property (copy, nonatomic) NSString *darkPlusIconFileMD5;
@property (copy, nonatomic) NSString *lightPlusIconFileMD5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awemeSettingDidChange;
- (void)invalidTimer;
- (id)initWithPlusButton:(id)a0;
- (void)tabBarWillAppear;
- (void)tabBarDidDisappear;
- (id)dynamicDarkPlusIcon;
- (id)dynamicLightPlusIcon;
- (void)applyFineMotion;
- (void)cleanResources;
- (BOOL)checkShouldShowDynamicIcon;
- (void)viewControllerDidFinishTransition:(id)a0;
- (void)RNViewControllerWillDismissOrPopOut:(id)a0;
- (id)tabBarSelectedNavigationController;
- (void)downloadResourcesWithConfig:(id)a0;
- (void)p_downloadDynamicIconWithIconURL:(id)a0 fileMD5:(id)a1 fileNamePrefix:(id)a2;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)activeTimer;

@end
