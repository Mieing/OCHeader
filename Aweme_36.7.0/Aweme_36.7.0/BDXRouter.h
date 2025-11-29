@class NSString, NSHashTable;

@interface BDXRouter : NSObject <BDXRouterProtocol>

@property (retain, nonatomic) NSHashTable *containers;
@property (nonatomic) int currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (BOOL)__validateSourceUrl:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)sharedInstance;
+ (unsigned long long)serviceType;

- (void)openViewControllerWithURL:(id)a0 completion:(id /* block */)a1;
- (void)openViewControllerWithURL:(id)a0 bid:(id)a1 completion:(id /* block */)a2;
- (void)openViewControllerWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 completion:(id /* block */)a3;
- (void)openViewControllerWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 completion:(id /* block */)a4;
- (void)openViewControllerWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 containerType:(id)a5 completion:(id /* block */)a6;
- (void)openViewControllerWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 containerType:(id)a5 contextBuilder:(id /* block */)a6 completion:(id /* block */)a7;
- (id)createViewControllerWithURL:(id)a0;
- (id)createViewControllerWithURL:(id)a0 bid:(id)a1;
- (id)createViewControllerWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2;
- (id)createViewControllerWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3;
- (id)createViewControllerWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 containerType:(id)a5;
- (id)createViewControllerWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 containerType:(id)a5 contextBuilder:(id /* block */)a6;
- (id)createContainerWithUrl:(id)a0 context:(id)a1 error:(id *)a2;
- (void)transferWithViewController:(id)a0 sourceViewController:(id)a1 transitionOption:(unsigned long long)a2 completion:(id /* block */)a3;
- (BOOL)closeWithContainerID:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)routeStack;
- (void)openWithUrl:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)containerWithUrl:(id)a0 context:(id)a1 autoPush:(BOOL)a2;
- (BOOL)useAnnieXCardForPageWithURL:(id)a0;
- (id)containerWithUrl:(id)a0 context:(id)a1 autoPush:(BOOL)a2 error:(id *)a3;
- (void)collectSLMonitorBaseWithContext:(id)a0 urlString:(id)a1 queryItems:(id)a2 containerType:(id)a3 openTime:(long long)a4;
- (id)trackOpenEventWithContext:(id)a0 urlString:(id)a1 queryItems:(id)a2 error:(id *)a3;
- (id)containerWithUrl:(id)a0 context:(id)a1 openPage:(BOOL)a2 openPopup:(BOOL)a3 error:(id *)a4;
- (void)transferWithViewController:(id)a0;
- (BOOL)enablePageConcurrentLoadWithCardModel:(id)a0;
- (void)createTracertMonitorIfNeededWithContext:(id)a0;
- (id)containerWithContainerID:(id)a0;
- (id)__lifeCycleTrackerWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
