@class BDXThreadSafeDictionary, NSMutableDictionary, NSString, PuzzleContext, UIView, NSDictionary, UIViewController;
@protocol PuzzleHybridStateCenterProtocol, AnnieLiveBizContainerProtocol, BDXKitViewProtocol, IESLivePiperProtocol, IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol;

@interface AnnieLiveCardKitViewExtension : NSObject <IESHYHybridViewProtocol, IESLiveWebViewReuseProtocol>

@property (weak, nonatomic) UIView<BDXKitViewProtocol> *bdxKitView;
@property (weak, nonatomic) id<AnnieLiveBizContainerProtocol> annieLiveContainer;
@property (retain, nonatomic) id<IESLivePiperProtocol> liveBridge;
@property (retain, nonatomic) NSMutableDictionary *initialMethodsMapForRetain;
@property (retain, nonatomic) id<PuzzleHybridStateCenterProtocol> cacheStateCenter;
@property (weak, nonatomic) UIViewController *currentVC;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, nonatomic) UIView *rawView;
@property (retain, nonatomic) PuzzleContext *context;
@property (retain, nonatomic) id<PuzzleHybridStateCenterProtocol> stateCenter;
@property (readonly, nonatomic) unsigned long long kernalType;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> lifecycleDelegate;
@property (copy, nonatomic) NSString *liveBusiness;
@property (readonly, copy, nonatomic) NSDictionary *initialMethodsMap;
@property (retain, nonatomic) BDXThreadSafeDictionary *lazyCreateMethodsMap;
@property (weak, nonatomic) id<IESLiveHybridContainerDelegate> liveHybridContainerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentRequestURL;
- (unsigned long long)currentKernal;
- (void)addPiperHandler:(id)a0;
- (void)setupBridge:(id)a0 withKitViewProxy:(id)a1;
- (id)initialMethodsMap;
- (BOOL)isAnnieX;
- (id)getCustomPerformanceTiming;
- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)addXBridgeMethods;
- (void)updateGlobalPropQueryItems:(id)a0;
- (void)webViewEndReuse;
- (void)removeKitViewData;
- (id)initWithKitView:(id)a0 liveContainer:(id)a1;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)scrollView;
- (BOOL)isKindOfClass:(Class)a0;
- (void)setupViewController;

@end
