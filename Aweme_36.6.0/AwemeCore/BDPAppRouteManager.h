@class BDPAppController, NSString, NSArray, BDPUniqueID, NSMutableDictionary, BDPAnnieAppBusinessEngine, NSMutableArray, NSObject, BDPRuntimeApp, BDPPromise;
@protocol OS_dispatch_semaphore;

@interface BDPAppRouteManager : NSObject <BDPNavigationRouteProtocol, BDPAppPageMonitorProtocol, UITabBarControllerDelegate> {
    BDPAppController *_appController;
    NSObject<OS_dispatch_semaphore> *_routeSem;
    BDPPromise *_uiPromise;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) BDPRuntimeApp *runtime;
@property (weak, nonatomic) BDPAnnieAppBusinessEngine *engine;
@property (retain, nonatomic) NSMutableArray *stashedPageRoute;
@property (retain, nonatomic) NSMutableDictionary *pageMonitors;
@property (retain, nonatomic) NSArray *checkAppList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setNextRouteWithAppController:(id)a0 routeMethod:(id)a1 andDestPath:(id)a2;

- (void)setupPlugins;
- (id)getBridgeInstance;
- (id)initWithAppController:(id)a0;
- (void)showGoHomeButtonIfNeed;
- (void)reLaunch:(id)a0 completion:(id /* block */)a1;
- (void)redirectTo:(id)a0;
- (void)navigateToWithUrl:(id)a0 completion:(id /* block */)a1;
- (void)popStashedPageRouteAfterRouteReadyIfNeeded:(id)a0;
- (void)setupAnniePlugins;
- (void)prepareAnnieWithPath:(id)a0;
- (void)prepareRouteToPath:(id)a0;
- (id)prepareRouteIDWithPageVC:(id)a0 routeModel:(id)a1;
- (id)pageEventMonitorForPath:(id)a0;
- (BOOL)prepareWebviewEnvWithModel:(id)a0;
- (id)checkScreenTypeWithParams:(id)a0;
- (id)createPageControllerWithPath:(id)a0;
- (id)defaultRouteModelWithRouteAct:(id)a0 pageUrl:(id)a1;
- (void)animationCompletionWithViewController:(id)a0 completion:(id /* block */)a1;
- (void)routeTo:(id)a0 actionBlk:(id /* block */)a1 completion:(id /* block */)a2;
- (void)setupNavigateBack:(id)a0;
- (BOOL)useNewXScreenGestureOpt;
- (BOOL)shouldDropStashedPageRouteBeforeRouteToWithMethod:(id)a0;
- (BOOL)isValidAppRouteURL:(id)a0;
- (void)preparePluginIfNeededForPagePath:(id)a0 completioin:(id /* block */)a1;
- (void)redirectToPage:(id)a0;
- (void)loadPluginServiceWithPageConfig:(id)a0 model:(id)a1 complete:(id /* block */)a2;
- (void)navigation:(id)a0 didPushViewController:(id)a1;
- (void)navigation:(id)a0 didPopViewController:(id)a1 willShowViewController:(id)a2;
- (void)reLaunchToPlugin:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)tabBarController:(id)a0 shouldSelectViewController:(id)a1;
- (void)goHome;

@end
