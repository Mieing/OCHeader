@class AWEProfileContrailHelper, UIViewController, NSString;
@protocol AWEProfileHeaderVCRefactorTempABInterfaceProtocol;

@interface AWEProfileHeaderHomeComponent : AWEUserHomeBaseComponent <AWEProfileHeaderViewControllerDelegate, AWEUserMessage, AWEProfileHeaderViewControllerProviderProtocol>

@property (readonly, nonatomic) AWEProfileContrailHelper *contrailHelper;
@property (retain, nonatomic) UIViewController<AWEProfileHeaderVCRefactorTempABInterfaceProtocol> *profileHeaderVC;
@property (nonatomic) BOOL hasContainerScrolled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (void)resetHeaderViewController;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateHeaderHeight;
- (void)updateNavBtnAlpha:(double)a0;
- (void)didCompleteProfileInfo;
- (BOOL)isCurrentViewControllerSticky;
- (void)onEnterHomePageTab;
- (void)onTabList:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (void)onResetUI;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)onReloadSegment:(id)a0 withDefaultIndex:(long long)a1 tabListViewController:(id)a2;
- (void)scrollViewBeginDragging;
- (void)onLeaveHomePageTab;
- (double)bannerHeightWithoutOverlap;
- (void)contrailWillEnterFullScreen;
- (void)contrailEnterFullScreenWithFullScreenTopOffsetY:(double)a0 animation:(id /* block */)a1;
- (void)contrailDidFinishedEnterFullScreenWithAnimationSucceed:(BOOL)a0;
- (void)contrailWillLeaveFullScreenWithShowTabBar:(BOOL)a0;
- (void)contrailLeaveFullScreen;
- (void)contrailDidFinishedLeaveFullScreen;
- (float)p_completionPercent;
- (void)refreshHeaderForFoldAnimate;
- (void)clearContextPropertyWhileSwitchingAccount;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)user;
- (id)headerViewController;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)onInit;
- (void)viewWillDisappear;

@end
