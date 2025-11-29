@class IESECBlenderContext, IESECServiceProxy, NSDictionary, IESECBlenderBlockEngine, NSString;
@protocol IESECBlenderPerformance, IESECBlenderViewMangerProtocol, IESECBlenderTracker, IESECBlenderPreloadLynx, UIGestureRecognizerDelegate, IESECBlenderXBridgeRegister, IESECBlenderDataManagerProtocol, IESECBlenderPrefetch, IESECBlenderHybridAtomicAbilityHandler;

@interface IESECBlenderViewController : UIViewController <IESECBlenderViewController>

@property (retain, nonatomic) IESECBlenderContext *context;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderViewMangerProtocol> *viewManager;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderDataManagerProtocol> *dataManager;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderPreloadLynx> *preloadLynxHelper;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderXBridgeRegister> *bridgeRegister;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderHybridAtomicAbilityHandler> *bridgeAtomicAbilityHandler;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderPrefetch> *prefetcher;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate> preInteractivePopGestureRecognizerDelegate;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderPerformance> *performance;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderTracker> *blenderTracker;
@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) IESECBlenderBlockEngine *blockEngine;
@property (nonatomic) BOOL pageDSLInstalled;
@property (nonatomic) BOOL finishedPageDSLRequest;
@property (retain, nonatomic) NSDictionary *dslCache;
@property (nonatomic) BOOL finishedFirstUpdate;
@property (nonatomic) long long useSettingsConfigReqMutex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)disableFullscreenPopTransitionFor:(id)a0;
+ (void)prefetchInitialConfig:(id)a0 completion:(id /* block */)a1;

- (void)registerService;
- (void)willAppear:(BOOL)a0;
- (void)didAppear:(BOOL)a0;
- (void)willDisappear:(BOOL)a0;
- (void)didDisappear:(BOOL)a0;
- (void)serialPrefetch:(id)a0 forScene:(long long)a1;
- (void)supplyParallelPrefetch:(id)a0 forScene:(long long)a1;
- (id)templateBundleDecodeManager;
- (void)setBtm;
- (void)markPerformance:(id)a0 value:(id)a1;
- (id)buildApiResponseLynxGlobalProps:(id)a0 scene:(long long)a1 requestTime:(double)a2 result:(id)a3 apiVersion:(long long)a4 style:(long long)a5;
- (void)updateDataManager:(id)a0;
- (void)handlePrefetchResponse:(id)a0 scene:(long long)a1 requestTime:(double)a2 result:(id)a3 apiVersion:(long long)a4 style:(long long)a5;
- (void)handleFirstScreenRequest:(id)a0 configSource:(id)a1;
- (void)loadBlockRootView:(id)a0 source:(id)a1;
- (id)getServiceBySelector:(SEL)a0;
- (void)configPrefetcher:(id)a0;
- (void)forceUseApiConfig:(id)a0;
- (void)setupApiConfig:(id)a0 configSource:(id)a1 error:(id)a2;
- (void)setup:(id)a0 error:(id)a1;
- (void)setupPageDSL:(id)a0 error:(id)a1;
- (void)preCreateLynx:(id)a0 forUrl:(id)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withInitialData:(id)a3 withGlobalProps:(id)a4 withLocalCacheKey:(id)a5;
- (void)didBecomeActive;
- (void)close;
- (void)willResignActive;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didLoad;

@end
