@class AWETeenFeedRootViewController, AWETeenModeTabBarFeedView, NSString, NSDate, UIButton;
@protocol AWETeenModeTabBarItemConfigAbility, AWETeenModeTabBarGeneralButtonProtocol;

@interface AWEBizTabBarTeenFeedItemConfig : NSObject <AWEBizTabBarTeenFeedItemConfigCallProtocol, AWEBizTabBarLightModeListenerProtocol, AWETeenModeTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWETeenModeTabBarGeneralButtonProtocol> *teenFeedButton;
@property (retain, nonatomic) AWETeenModeTabBarFeedView *customTeenFeedButton;
@property (retain, nonatomic) AWETeenFeedRootViewController *teenFeedController;
@property (retain, nonatomic) id<AWETeenModeTabBarItemConfigAbility> tabBarAbility;
@property (nonatomic) BOOL isInRecommendChannel;
@property (nonatomic) BOOL shouldDisableRefresh;
@property (retain, nonatomic) NSDate *lastRepeatedlyClickTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfig;

- (void)switchToLightModeWithProgress:(double)a0;
- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)tabBarDidUnSelectItemToNextSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)tabBarControllerDidChangedThemeFollowSystem;
- (void)feedRootViewController:(id)a0 showBackgroundImagesWithProgress:(double)a1;
- (void)setupTeenModeTabBarAbility:(id)a0;
- (BOOL)enableTeenDoubleColumn;
- (void)doubleColumnSwitchIcon:(BOOL)a0;
- (void)p_handleRepeatedlyClicked;
- (BOOL)handleTabBarItemDoublePressFromPreviousSelectedType:(long long)a0;
- (void)updateFeedTabRefreshState;
- (void).cxx_destruct;
- (void)setupConfig;

@end
