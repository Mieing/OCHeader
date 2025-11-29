@class BDECRabbiFlyJSEngineLoader, NSString, BDECRabbiFlyAnnieX, BDECRabbiFlyDynamicSupervisorConfig, BDECRabbiFlySyncManager, BDECRabbiFlyBundleLoader, BDECRabbiFlyTrackLogic, BDECRabbiFlyViewManager;
@protocol BDECRabbiFlyIBFFLogic, BDECRabbiFlyIBridgeHandlerManager, BDECRabbiFlyIActionHandlerManager, BDECRabbiFlyIModelManager, BDECRabbiFlyIClientResponse, BDECRabbiFlyIInitAdapter, BDECRabbiFlyIModelChangedNotifier, BDECRabbiFlyISliceX, BDECRabbiFlyIViewLifeCycleOwner;

@interface BDECRabbiFlyDynamicSupervisor : NSObject <BDECRabbiFlyISliceXDelegate, BDECRabbiFlyIClientResponse, BDECRabbiFlyIViewLifeCycle, BDECRabbiFlyIDynamicSupervisor>

@property (retain, nonatomic) BDECRabbiFlyDynamicSupervisorConfig *config;
@property (weak, nonatomic) id<BDECRabbiFlyIInitAdapter> adapter;
@property (retain, nonatomic) id<BDECRabbiFlyIActionHandlerManager> actionHandlerManager;
@property (retain, nonatomic) id<BDECRabbiFlyIBridgeHandlerManager> bridgeHandlerManager;
@property (retain, nonatomic) id<BDECRabbiFlyISliceX> sliceX;
@property (retain, nonatomic) BDECRabbiFlyAnnieX *annieX;
@property (retain, nonatomic) id<BDECRabbiFlyIBFFLogic, BDECRabbiFlyIClientResponse> logicCoordinator;
@property (retain, nonatomic) BDECRabbiFlyJSEngineLoader *jsEngineLoader;
@property (retain, nonatomic) BDECRabbiFlyBundleLoader *bundleLoader;
@property (retain, nonatomic) id<BDECRabbiFlyIModelManager> modelManager;
@property (retain, nonatomic) BDECRabbiFlyViewManager *viewManager;
@property (retain, nonatomic) id<BDECRabbiFlyIViewLifeCycleOwner> lifeCycleOwner;
@property (retain, nonatomic) id<BDECRabbiFlyIModelChangedNotifier> modelChangedNotifier;
@property (retain, nonatomic) BDECRabbiFlySyncManager *syncManager;
@property (retain, nonatomic) BDECRabbiFlyTrackLogic *trackLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)biz;
- (void)sendEventWithToken:(id)a0 event:(id)a1 data:(id)a2;
- (struct CGSize { double x0; double x1; })getViewSizeWithModel:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)createViewWithModel:(id)a0 config:(id)a1;
- (void)registerActionHandler:(id)a0 forAction:(id)a1;
- (id)getInitAdapter;
- (id)getModelChangedNotifier;
- (id)getViewManager;
- (id)getModelManager;
- (id)getActionHandlerManager;
- (id)getBridgeHandlerManager;
- (id)getClientResponse;
- (void)setupModelChangedLogic;
- (void)setupViewLifeCycle;
- (void)registerUpdateRenderDataCallback:(id /* block */)a0;
- (void)registerDynamicViewLifeCycle:(id)a0;
- (void)sliceX:(id)a0 onAction:(id)a1 activeView:(id)a2 token:(id)a3;
- (void)sliceX:(id)a0 onPerformanceEvent:(id)a1 params:(id)a2;
- (void)onDynamicViewStateChange:(id)a0 state:(unsigned long long)a1;
- (id)createViewWithModel:(id)a0 config:(id)a1 error:(id *)a2;
- (void)unregisterActionHandler:(id)a0;
- (id)initWithConfig:(id)a0 initAdapter:(id)a1;
- (id)getSliceX;
- (id)getAnnineX;
- (id)getJSEngineLoader;
- (id)getBundleLoader;
- (id)getViewLifeCycleOwner;
- (id)getTrackLogic;
- (void).cxx_destruct;
- (void)processData:(id)a0;
- (void)viewWillAppear;
- (id)getConfig;
- (void)viewWillDisappear;

@end
