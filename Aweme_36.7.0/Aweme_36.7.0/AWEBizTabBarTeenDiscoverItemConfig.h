@class NSString, AWETeenTabbarDiscoverButton, AWETeenDiscoverViewController;

@interface AWEBizTabBarTeenDiscoverItemConfig : NSObject <AWEDigitalWellbeingMessage, AWEBizTabBarMessage, AWEUserMessage, AWETeenDiscoverTabButtonDelegate, AWETeenNightLockMessage, AWETeenModeTabBarItemConfigProtocol>

@property (retain, nonatomic) AWETeenTabbarDiscoverButton *teenDiscoverButton;
@property (retain, nonatomic) AWETeenDiscoverViewController *teenDiscoverController;
@property (nonatomic) BOOL fetchTeenDiscoverNavWhenLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfig;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)setupNotification;
- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (void)tabBarController:(id)a0 didSelectItemType:(long long)a1 previousItemType:(long long)a2;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)didDismissNightLock;
- (void)fetchTeenDiscoverNavIfNeeded;
- (void)dismissDiscoverBubbleIfNeeded;
- (void)redoTeenDiscoverAnimations;
- (id)teenDiscoverInnerView;
- (void)didSelectedDiscoverTab;
- (void)didDiscoverTabWithRecommandRemind:(BOOL)a0;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (void)setupConfig;

@end
