@class BDXBridgeEventSubscriber, NSString, HunterContext, UIView, NSMutableDictionary, NSMutableArray, HunterDynamicPatchModel, HunterContainerViewModel;
@protocol HunterContainerChildViewProtocol, HunterContainerProtocol, HunterContainerLifeCycleProtocol;

@interface HunterContainerView : UIView <HunterContainerProtocol>

@property (retain, nonatomic) HunterContext *context;
@property (nonatomic) BOOL hasScrollShow;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) NSMutableDictionary *eventCallBacks;
@property (retain, nonatomic) NSMutableArray *missingSelectors;
@property (retain, nonatomic) id<HunterContainerProtocol> cacheContainer;
@property (weak, nonatomic) id<HunterContainerLifeCycleProtocol> lifeCycleDelegate;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) HunterContainerViewModel *viewModel;
@property (retain, nonatomic) HunterDynamicPatchModel *dynamicPatchModel;
@property (retain, nonatomic) UIView<HunterContainerChildViewProtocol> *childView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)observePreserveDataWithCompletion:(id /* block */)a0;
- (id)kitView;
- (id)createChildView;
- (void)loadWithURLString:(id)a0 withRawData:(id)a1;
- (void)loadWithModel:(id)a0;
- (void)updateDataWithModel:(id)a0;
- (void)updateDataWithModel:(id)a0 processorName:(id)a1;
- (void)sendPageVisibilityChangeEvent:(BOOL)a0 source:(id)a1;
- (void)sendPageListScrollChangeEvent:(BOOL)a0;
- (void)unRegisterEventCallBack:(id)a0;
- (void)setContainerSizeWithWidthMode:(long long)a0 withHeightMode:(long long)a1;
- (double)renderHeight;
- (void)configWithPreserveDataManager:(id)a0;
- (void)updateDataAfterInit:(id)a0;
- (void)loadWithURLString:(id)a0;
- (void)registerEventCallBack:(id /* block */)a0 forEvent:(id)a1;
- (void)captureViewScreenshotInDebug;
- (void)bringDebugLevelToFront;
- (void)sendMissingSelectorIfNeed;
- (void)addDebugLabel;
- (void)setDebugText:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)setupUI;

@end
