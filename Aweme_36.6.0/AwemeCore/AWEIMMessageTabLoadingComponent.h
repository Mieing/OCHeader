@class NSString, AWEIMMessageTabLoadingView, AWEIMMessageTabLoadingStatusMachine;
@protocol AWEIMMessageTabNaviBarInterface, AWEIMMessageTabDisconnectedTipInterface, IESIMThrottleDebounceAction;

@interface AWEIMMessageTabLoadingComponent : AWEIMComponentBase <IESIMMessageTabLoadingInterface>

@property (weak, nonatomic) id<AWEIMMessageTabNaviBarInterface> naviBarService;
@property (nonatomic) unsigned long long loadingViewStatus;
@property (retain, nonatomic) AWEIMMessageTabLoadingView *loadingView;
@property (retain, nonatomic) AWEIMMessageTabLoadingStatusMachine *statusMachine;
@property (retain, nonatomic) id<IESIMThrottleDebounceAction> statusDebounce;
@property (weak, nonatomic) id<AWEIMMessageTabDisconnectedTipInterface> tipService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (BOOL)needShowLoadingView;
- (id)makeLoadingViewReplacing:(id)a0;
- (void)p_handleLoadingStatusUpdate:(long long)a0;
- (void).cxx_destruct;

@end
