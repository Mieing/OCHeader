@class NSString, AWENormalModeTabBarPlusButton, AWETabbarPlusScreenBurnManager;
@protocol AWENormalModeTabBarItemConfigAbility;

@interface AWEBizTabBarPlusItemConfig : NSObject <AWEBizTabBarMessage, AWEBizTabBarLifeCycleMessage, AWEBizTabBarPlusItemConfigProtocol>

@property (retain, nonatomic) AWENormalModeTabBarPlusButton *plusButton;
@property (retain, nonatomic) AWETabbarPlusScreenBurnManager *plusScreenBurnManager;
@property (retain, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfigWithChannel:(id)a0;
+ (id)sharedConfig;

- (void)setupNotification;
- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (void)tabBarController:(id)a0 didSelectItemType:(long long)a1 previousItemType:(long long)a2;
- (BOOL)canLandingWithTabId:(id)a0 params:(id)a1;
- (void)setupTabBarAbility:(id)a0;
- (BOOL)isStickerIcon;
- (void)tabBarControllerViewWillAppear;
- (void)tabBarControllerViewDidDisappear;
- (void)tabBarControllerDidChangeSelectedIndex:(id)a0;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChannel:(id)a0;
- (void)setupConfig;

@end
