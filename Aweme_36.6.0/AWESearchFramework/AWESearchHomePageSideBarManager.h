@class UINavigationController, AWESearchHomePageHistoryViewController, AWESearchProfileSideBarViewController, UIViewController;

@interface AWESearchHomePageSideBarManager : NSObject

@property (nonatomic) long long currentButtonType;
@property (retain, nonatomic) UINavigationController *leftSideBarNav;
@property (retain, nonatomic) UINavigationController *rightSideBarNav;
@property (retain, nonatomic) UIViewController *fakeVC;
@property (nonatomic) BOOL isQuickPan;
@property (nonatomic) BOOL isSearchResult;
@property (nonatomic) BOOL disableRightSlideShow;
@property (weak, nonatomic) UIViewController *rootVC;
@property (weak, nonatomic) AWESearchHomePageHistoryViewController *historyListVC;
@property (weak, nonatomic) AWESearchProfileSideBarViewController *profileSideBarVC;
@property (copy, nonatomic) id /* block */ sideBarShow;

+ (BOOL)fixSideBarVCRemoveWhenCancelled;

- (void)nav_slideShowSideBar:(id)a0;
- (void)sideBarDismissWithType:(long long)a0 animation:(BOOL)a1;
- (void)nav_slideHideSideBar:(id)a0 buttonType:(long long)a1;
- (void)nav_clickShowSideBar:(BOOL)a0 animated:(BOOL)a1 buttonType:(long long)a2;
- (void)nav_slideHideLeftSideBar:(id)a0;
- (void)nav_slideHideRightSideBar:(id)a0;
- (void)nav_sideBarWillOpenWithType:(long long)a0 enterMethod:(id)a1;
- (void)nav_updateSideBarInnerViewsWithOriginX:(double)a0 type:(long long)a1;
- (void)nav_sideBarDidOpenWithType:(long long)a0;
- (void)nav_removeSideBarVCOnlyWithButtonType:(long long)a0;
- (void)nav_showSideBar:(BOOL)a0 animated:(BOOL)a1 duration:(double)a2 buttonType:(long long)a3 completion:(id /* block */)a4;
- (void)nav_addSideBarVCWithType:(long long)a0 completion:(id /* block */)a1;
- (void)nav_sideBarWillCloseWithType:(long long)a0;
- (void)nav_removeSideBarVCAndViewWithButtonType:(long long)a0;
- (void)nav_sideBarDidCloseWithType:(long long)a0;
- (void)nav_removeSideBarVCAndViewWithButtonType:(long long)a0 completion:(id /* block */)a1;
- (double)nav_sideBarWidthWithType:(long long)a0;
- (void)nav_sideBarCancelCloseWithType:(long long)a0;
- (void)nav_resetCurrentButtonType;
- (void)nav_sideBarCancelOpenWithType:(long long)a0;
- (void)nav_updateSideBarViewPosition:(double)a0 type:(long long)a1;
- (id)nav_sideBarVCWithButtonType:(long long)a0;
- (void)nav_setNavWithButtonType:(long long)a0 navVC:(id)a1;
- (id)nav_sideBarNavVCWithButtonType:(long long)a0;
- (void)nav_resetNavWithButtonType:(long long)a0;
- (void).cxx_destruct;
- (id)view;

@end
