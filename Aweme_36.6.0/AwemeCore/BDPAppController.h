@class UIView, NSString, BDPAppRouteManager, BDPVConsole, BDPAppPageURL, BDPUniqueID, UIViewController, BDPNavigationController;

@interface BDPAppController : UIViewController <BDPWarmBootMessage, BDPWebViewPageLifeCycleMessage, BDPCutLossesMessage, BDPElementFullscreenMessage, BDPBootLifeCycleMessage>

@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL hasEnteredBg;
@property (retain, nonatomic) BDPAppPageURL *startPage;
@property (retain, nonatomic) BDPVConsole *vConsole;
@property (nonatomic) BOOL isObservedWindowResize;
@property (retain, nonatomic) UIViewController *cutLossesVC;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPNavigationController *subNavi;
@property (retain, nonatomic) BDPAppRouteManager *routeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentAppPageController:(id)a0;

- (void)onAppEnterBackground;
- (void)updateContentVC:(id)a0;
- (void)applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)pageLCPArrive:(id)a0 pageID:(long long)a1;
- (void)enterFullscreenWithPageID:(long long)a0 orientation:(long long)a1 element:(id)a2 uniqueID:(id)a3;
- (void)exitFullscreenWithPageID:(long long)a0 element:(id)a1 uniqueID:(id)a2;
- (void)onAppEnterForeground;
- (void)cutLossesBeginWithUniqueID:(id)a0 info:(id)a1;
- (void)cutLossesEndWithUniqueID:(id)a0 isFulfilled:(BOOL)a1;
- (id)contentController:(id)a0;
- (void)setupAppView;
- (BOOL)delayObserveWindowResize;
- (void)observeWindowResize;
- (BOOL)canBeActive;
- (void)setAppViewPause:(BOOL)a0;
- (id)initWithUniqueID:(id)a0 page:(id)a1;
- (id)getOnAppEnterForegroundParams;
- (void)performHotReload:(id)a0;
- (void)performHotReload:(id)a0 preRouteID:(id)a1;
- (void)forceStopRunning;
- (void)updateAppBackgroundColor:(id)a0;
- (void)hotReloadIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)updateContentView;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)navigationBarHidden;
- (void)setAppActive:(BOOL)a0;

@end
