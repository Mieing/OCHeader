@class BDMannorComponentManager, NSString, BDMannorManagerContext;

@interface BDMannorManager : NSObject <BDMannorAdComponentDelegate>

@property (retain, nonatomic) BDMannorManagerContext *context;
@property (retain, nonatomic) BDMannorComponentManager *componentManager;
@property (readonly, nonatomic) NSString *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)adComponentWithComponentType:(id)a0;
- (void)bindAd;
- (void)mannorComponentInit:(id)a0 componentType:(id)a1;
- (void)mannorComponentDidStartLoad:(id)a0 componentType:(id)a1;
- (void)mannorComponentDidFinishLoad:(id)a0 componentType:(id)a1;
- (void)mannorComponentDidLoadFailed:(id)a0 error:(id)a1 componentType:(id)a2;
- (void)mannorComponentJSRuntimeReady:(id)a0 componentType:(id)a1;
- (void)mannorComponentRenderFirstScreen:(id)a0 componentType:(id)a1;
- (void)mannorComponentDowngrade:(id)a0 errorMessage:(id)a1 componentType:(id)a2;
- (void)mannorComponentDestroy:(id)a0 componentType:(id)a1;
- (void)mannorComponentShow:(id)a0 componentType:(id)a1;
- (void)mannorComponentHide:(id)a0 componentType:(id)a1;
- (void)mannorComponent:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)createAdWith:(id)a0;
- (void)addAdComponent:(id)a0 withCompoentType:(id)a1;
- (void)broadcastEventToComponent:(id)a0 params:(id)a1;
- (id)componentMap;
- (void)destoryAd;
- (void)checkDowndgradeWithComponentID:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkAdComponentShowStatusWith:(id)a0;
- (void)removeAdComponentWithComponentType:(id)a0;
- (id)getDefaultComponentType;
- (void)hideAd;
- (void)checkDowndgradeWith:(id)a0 completion:(id /* block */)a1;
- (void)p_requestReportInfo;
- (void)p_registerSceneContextHandler;
- (void)p_registerContextDidChange;
- (void)p_trackMannorManagerInit;
- (void)p_unregisterSceneContextHandler;
- (void)showAd;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
