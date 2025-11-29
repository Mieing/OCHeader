@class NSString, AWEProfileNavigationContainerView, AWEProfileNavigationControllerManager;

@interface AWEProfileNavigationBaseComponent : AWEProfileBaseComponent <AWEProfilePadEventSubscriber, AWEProfileNavigationContainerDelegate, AWEProfileNavigationComponentProtocol, AWEProfileNavigationContainerLifeCycleProtocol>

@property (retain, nonatomic) AWEProfileNavigationControllerManager *navigationControllerManager;
@property (retain, nonatomic) AWEProfileNavigationContainerView *navigationContainerView;
@property (nonatomic) BOOL navBtnIsStickToTop;
@property (nonatomic) double lastClashWidth;
@property (nonatomic) long long sameClashCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)onAWEUIThemeChangeNotification;
- (id)eventCommonParamsHandler;
- (id)profileContext;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)onTabList:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (void)enterFullScreenFromSplitScreen;
- (id)padService;
- (void)onWillRefreshWithUser:(id)a0;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (id)currentLeftShowTypes;
- (void)reloadLeftData;
- (void)updateWithAlpha:(double)a0 force:(BOOL)a1;
- (id)currentLeftShowViews;
- (id)currentRightShowViews;
- (void)refreshNavigationAlphaIfNeed;
- (void)navigationStickToTop:(BOOL)a0;
- (id)currentRightShowTypes;
- (long long)currentSelectProfileTabType;
- (void)refreshNavigationStickTopIfNeed;
- (void)lifeCycleDistributeWithSelector:(SEL)a0;
- (void)refreshPadGradientShowStatus;
- (id)findLastVisibleView:(id)a0;
- (void)reportNavigationLayoutClashIfNeed;
- (void)reloadRightData;
- (id)userRootContainerView;
- (void)viewDidAppear;
- (void)reloadData;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)userModel;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear;
- (void)onInit;
- (void)viewWillDisappear;

@end
