@class NSString, MMTabBar, NSMutableArray, UITapGestureRecognizer;
@protocol MMTabBarControllerDelegate;

@interface MMTabBarController : UITabBarController <UIGestureRecognizerDelegate, MMTabBarDelegate> {
    unsigned long long _viewControllersCount;
    NSMutableArray *_tabBarBtns;
    UITapGestureRecognizer *_doubleTapGesture;
    BOOL _hasAddTapGesture;
}

@property (retain, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (retain, nonatomic) MMTabBar *customTabBar;
@property (weak, nonatomic) id<MMTabBarControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)makeSureFrame;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)relayoutButtons:(id)a0;
- (void)setSelectedViewController:(id)a0;
- (void)setViewControllers:(id)a0;
- (void)setAllTabBarItemEnabled:(BOOL)a0;
- (double)tabBarHeight;
- (void)hideTabBar;
- (void)showTabBar;
- (void)hideTabBarForIndex:(unsigned long long)a0;
- (void)showTabBarForIndex:(unsigned long long)a0;
- (void)hideTabBarWithNoViewHeightUpdateForIndex:(unsigned long long)a0;
- (void)showTabBarWithNoViewHeightUpdateForIndex:(unsigned long long)a0;
- (void)addTapGesture;
- (void)removeTapGesture;
- (void)handleTapGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)getTabBarBtnViews;
- (id)getTabBarBtnForIndex:(unsigned long long)a0;
- (void)clearTabBtns;
- (void)setTabBarItemSelectedIndex:(unsigned long long)a0;
- (BOOL)tabBarItemIsSelectedAtIndex:(unsigned long long)a0;
- (void)setTabBarItemTitle:(id)a0 forIndex:(unsigned long long)a1;
- (void)setTabBarItemCustomIconView:(id)a0 forIndex:(unsigned long long)a1;
- (id)currentViewController;
- (id)currentTopViewController;
- (id)getViewControllerAtIndex:(unsigned int)a0;
- (void)setTabBarBadgeValue:(unsigned long long)a0 forIndex:(unsigned long long)a1;
- (void)setTabBarBadgeString:(id)a0 forIndex:(unsigned long long)a1;
- (void)showRedDotOnTabBarItemAtIndex:(unsigned long long)a0;
- (void)removeRedDotOnTabBarItemAtIndex:(unsigned long long)a0;
- (id)getTabbarItemForIndex:(unsigned long long)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onTabBarItemViewsRelayout;
- (id)getCurrentViewController;
- (void)onTabBarHiddenChanged:(BOOL)a0;
- (id)badgeViewAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
