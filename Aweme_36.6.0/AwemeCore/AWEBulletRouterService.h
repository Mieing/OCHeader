@class NSString;

@interface AWEBulletRouterService : NSObject <BDXHostRouterServiceProtocol, AWERouterDelegate, BDXServiceProtocol>

@property (copy, nonatomic) id /* block */ beforeTransferBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)commonProps;
+ (id)createPopContainerViewControllerAndOpen:(id)a0;
+ (id)bizGlobalPropsWithSchema:(id)a0;
+ (id)tracertMonitorWithQueryItem:(id)a0 schema:(id)a1;
+ (id)p_createContainerViewController:(id)a0 queryItems:(id)a1 bid:(id)a2;
+ (id)p_generateBDXContextWithQueryItems:(id)a0 urlString:(id)a1 bid:(id)a2;
+ (void)p_regeisterPerfixListWithQueryItems:(id)a0;
+ (id)liteOfflinePrefix;
+ (long long)defaultStatusBarStyle;
+ (unsigned long long)serviceType;

- (id)createContainerViewController:(id)a0;
- (void)openSchemaByHost:(id)a0 beforeOpenCompletion:(id /* block */)a1 afterOpenCompletion:(id /* block */)a2;
- (void)openSchemaByHost:(id)a0 afterOpenCompletion:(id /* block */)a1;
- (BOOL)openSchemaByHost:(id)a0;
- (void)routerDidCreateViewControllerBeforeTransferWithURLString:(id)a0 targetViewController:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
