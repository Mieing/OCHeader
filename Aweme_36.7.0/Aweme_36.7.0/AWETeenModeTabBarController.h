@class AWETeenModeTabBar, NSArray, AWEBaseRootNavigationController, NSString, UIViewController;
@protocol AWETeenModeTabBarControllerDataSource, AWETeenModeTabBarControllerDelegate;

@interface AWETeenModeTabBarController : AWEBaseTabBarController <UITabBarControllerDelegate, AWEBaseRootNavigationControllerDelegate, AWETeenModeTabBarButtonDelegate, AWETeenModeTabBarDelegate> {
    NSArray *_viewControllers;
}

@property (copy, nonatomic) NSArray *buttons;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (retain, nonatomic) AWEBaseRootNavigationController *rootNavVC;
@property (retain, nonatomic) UIViewController *placeholderVC;
@property (retain, nonatomic) AWETeenModeTabBar *awe_tabBar;
@property (retain, nonatomic) id<AWETeenModeTabBarControllerDelegate> awe_bizDelegate;
@property (retain, nonatomic) id<AWETeenModeTabBarControllerDataSource> awe_bizDataSource;
@property (readonly, nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadTabBarControllerAdapterClass;
+ (id)tabBarController;

- (void)setTabBarBackgroundColorFill:(BOOL)a0 animated:(BOOL)a1;
- (void)resetSelectedTabWithAllowRepeatSelected:(BOOL)a0 scene:(id)a1;
- (void)tabBar:(id)a0 didSetHidden:(BOOL)a1;
- (void)tabBarButtonDidTouchUpInside:(id)a0;
- (void)startRunLoopObserver;
- (id)rootNavigationControllerWithViewController:(id)a0;
- (id)aAWEPadTabBarControllerAdapter;
- (void)tabbarControllerDidChangedFrame;
- (void)navigationController:(id)a0 didSetViewControllers:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 didPushViewController:(id)a1 animated:(BOOL)a2;
- (void)reloadWithScene:(id)a0 animated:(BOOL)a1;
- (void)showSeparatorLine:(BOOL)a0;
- (void)updateSeparatorLineColor:(id)a0;
- (void)dismissViewControllerBeforeTabbarControllerReload;
- (void)updateSelectedItemType:(long long)a0 options:(id)a1;
- (void)showBackgroundImagesWithProgress:(double)a0 needReloadRenderer:(BOOL)a1;
- (void)setBackgroundImagesHidden:(BOOL)a0;
- (void)switchToLightModeWithProgress:(double)a0 force:(BOOL)a1 itemType:(long long)a2 businessID:(id)a3;
- (long long)selectedItemTypeForLightModeFlags;
- (BOOL)shouldShowLightMode;
- (void)updateLightModeWithProgress:(double)a0 fromStack:(BOOL)a1 businessID:(id)a2;
- (void)updateTabBarButtonStatusesWithSelectedButton:(id)a0 forbidRefresh:(BOOL)a1;
- (void)updateTabBarButton:(id)a0 status:(long long)a1;
- (double)selectedItemTypeShouldShowLightModeProgress;
- (double)tabBarProgress;
- (void)setTabBarProgress:(double)a0;
- (void)setIsLightMode:(BOOL)a0;
- (void)setTabBarBackgroundColorFill:(BOOL)a0 animated:(BOOL)a1 fromStack:(BOOL)a2;
- (void)p_updateCurrentRootController:(id)a0;
- (void)didThemeChanged:(BOOL)a0;
- (void)updateTabBarButtonStatusesWithSelectedButton:(id)a0;
- (void)updateLightModeAfterSelectedTypeChange;
- (BOOL)selectedItemTypeShouldShouldTabBarBackgroundColorFill;
- (void)switchToLightModeWithProgress:(double)a0 itemType:(long long)a1 businessID:(id)a2;
- (double)getTabBarThemeProgress;
- (void)clearTabBarController;
- (id)selectedItemConfig;
- (void)popToRootViewAndUpdateSelectedItemType:(long long)a0 landingParams:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)isLightMode;
- (id)viewControllers;
- (void)setViewControllers:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)setSelectedIndex:(unsigned long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tabBarController:(id)a0 animationControllerForTransitionFromViewController:(id)a1 toViewController:(id)a2;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;

@end
