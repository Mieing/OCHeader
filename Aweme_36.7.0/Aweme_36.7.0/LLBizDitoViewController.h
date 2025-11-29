@class NSDictionary, NSString;

@interface LLBizDitoViewController : LLDitoViewController <LLDitoMonitorExtensionDataSourceProtocol>

@property (nonatomic) double fmpStartTime;
@property (nonatomic) BOOL isComponentTrackEnable;
@property (copy, nonatomic) NSDictionary *dito_settingsConfig;
@property (copy, nonatomic) NSString *degradeRequestPath;
@property (copy, nonatomic) NSDictionary *dito_disasterImmediateRecoveryConfig;
@property (nonatomic) BOOL isDitoSubPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setPanBeginAction:(id /* block */)a0;
- (void)didLoadPageModel:(id)a0;
- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (void)sendMainRequest;
- (BOOL)shouldMultiTabDataSourcePreset;
- (void)registerAWEDitoBaseExtensions;
- (void)registerAWEDitoAgents;
- (void)setupTransitionAction;
- (void)bindAWEDitoStateAndAction;
- (void)setupConfigWhenBeforeBindPageModel:(id)a0;
- (BOOL)turnOffDefaultDidBindMainDataEvent;
- (void)setupNestedScrollV2Config:(id)a0;
- (void)setupViscousDragConfig:(id)a0;
- (void)disasterDegradedToH5:(id)a0;
- (id)disasterRecoveryConfig:(id)a0;
- (void)disasterDegradedToPath:(BOOL)a0 path:(id)a1;
- (void)disasterDegradedToStaticPage:(id)a0;
- (void)trackDitoDisaster:(id)a0 error:(id)a1;
- (void)ditoAddChildViewController:(id)a0 relevantTo:(id)a1;
- (id)staticPageConfig:(id)a0;
- (id)parseDisasterRecoveryStrategy;
- (id)performanceTrackParams;
- (void)dispatchPanActionEvent;
- (id)requestCostParamsForResponse:(id)a0;
- (id)createNetworkImpl;
- (id)createTrackServiceImpl;
- (id)createStorageImpl;
- (id)createCustomParserImpl;
- (id)createRouterImpl;
- (id)createMonitorImpl;
- (BOOL)switchFromDitoSettingByKey:(id)a0 defaultValue:(BOOL)a1;
- (void)tryToFallbackDisasterPageAtPhase:(unsigned long long)a0;
- (void)removeSelfFromNavigationController;
- (void).cxx_destruct;
- (id)init;
- (id)createContext;
- (void)viewDidLoad;
- (id)initWithSessionId:(id)a0;

@end
