@class ACCComponentsFactory, NSString, NSHashTable, UIView, NSNumber;
@protocol ACCBusinessConfiguration, IESServiceProvider, ACCFPPageContextProtocol, ACCComponentManager;

@interface ACCViewController : UIViewController <ACCPerfStrategyStateLifeCycleProtocol, ACCViewController, ACCComponentController, ACCRouterService, ACCComponentManagerLoadPhaseDelegate>

@property (retain, nonatomic) id<ACCFPPageContextProtocol> featurePlatformContextObject;
@property (retain, nonatomic) id<ACCFPPageContextProtocol> fpSwiftPageContextWrapper;
@property (retain, nonatomic) id componentKitContainer;
@property (retain, nonatomic) id<ACCBusinessConfiguration> business;
@property (retain, nonatomic) id<IESServiceProvider> businessServiceContainer;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCComponentManager> componentManager;
@property (retain, nonatomic) ACCComponentsFactory *componentFactory;
@property (retain, nonatomic) NSNumber *startLoadUITime;
@property (retain, nonatomic) NSNumber *endLoadUITime;
@property (retain, nonatomic) NSHashTable *routerServiceSubscribers;
@property (readonly, nonatomic) id inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;

- (id)initWithBusinessConfiguration:(id)a0;
- (BOOL)enableFirstRenderOptimize;
- (BOOL)routerAnimated;
- (void)popSelf;
- (id)handleTargetViewControllerInputData;
- (void)prepareForLoadComponent;
- (void)beforeLoadBeforeFirstRenderComponent;
- (void)beforeLoadEagerComponent;
- (void)beforeLoadLazyComponent;
- (double)loadPageUICost;
- (id)creatComponentManager;
- (void)prepareForStatusBarOrientationDidChange;
- (void)didReceiveMemoryWarningWithType:(unsigned long long)a0;
- (void)controllerTaskFinished;
- (void)fixIOS18UIBug;
- (void)componentManager:(id)a0 willLoadPhase:(unsigned long long)a1;
- (void)configPageServiceContainer:(id)a0 inputData:(id)a1;
- (void)handleStatusBarOrientationDidChangeNotification:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)root;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)addSubscriber:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)removeSubscriber:(id)a0;

@end
