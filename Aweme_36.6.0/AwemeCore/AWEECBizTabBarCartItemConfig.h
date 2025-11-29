@class UIButton, AWEECTabBarCartViewController, NSString;
@protocol AWENormalModeTabBarItemConfigAbility, AWENormalModeTabBarGeneralButtonProtocol;

@interface AWEECBizTabBarCartItemConfig : NSObject <AWEECTabBarBubbleNReddotProtocol, AWEBizTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWENormalModeTabBarGeneralButtonProtocol> *cartButton;
@property (retain, nonatomic) AWEECTabBarCartViewController *cartVC;
@property (retain, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENormalModeTabBarFactoryCommonAdapterClass;
+ (id)sharedConfigWithChannel:(id)a0;
+ (id)sharedConfig;

- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)canLandingWithTabId:(id)a0 params:(id)a1;
- (void)setupTabBarAbility:(id)a0;
- (id)aAWENormalModeTabBarFactoryCommonAdapter;
- (void)tabBarWillUnSelectItemWithLeaveModel:(id)a0;
- (void)tabBarWillSelectItemWithEnterModel:(id)a0;
- (void)tabBarDidUnSelectItemToNextSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)loginIfNeededAtTabBarItemSelection:(BOOL)a0;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:(long long)a0;
- (void)tabBarDidDeselectItem;
- (void)tabBarControllerDidChangedThemeFollowSystem;
- (BOOL)inTabBarCart;
- (void)handleBubbleResponseSuccess;
- (void)handleRecordedBubbleResponse;
- (void).cxx_destruct;
- (void)updateTheme;
- (id)initWithChannel:(id)a0;

@end
