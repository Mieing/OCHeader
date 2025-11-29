@class DitoContainerRouterParamsParser, DitoContainerPageContext, DitoContainerNetworkHelper, NSString;

@interface DitoContainerViewController : AWEDitoViewController

@property (retain, nonatomic) DitoContainerRouterParamsParser *routerParser;
@property (retain, nonatomic) DitoContainerPageContext *context;
@property (retain, nonatomic) DitoContainerNetworkHelper *networkHelper;
@property (copy, nonatomic) NSString *btmID;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)registerExtensions;
- (void)didSendRequest;
- (id)DitoPageScene;
- (id)trackParamsForPageAutoTrackWithEventName:(id)a0 params:(id)a1;
- (void)sendMainRequest;
- (id)performanceTrackParams;
- (id)createRouterParser;
- (void)registerDitoContainerExtensions;
- (void)registerDitoContainerComponents;
- (void)bindDitoContainerStateAndAction;
- (void)requestWithRequestActionContext:(id)a0;
- (void)dismissDitoContainer:(id)a0;
- (void)setupLynxContainerBuilder;
- (void).cxx_destruct;
- (id)init;
- (id)createContext;
- (void)viewDidLoad;

@end
