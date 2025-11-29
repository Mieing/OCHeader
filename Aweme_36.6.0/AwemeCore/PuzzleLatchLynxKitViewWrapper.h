@class NSString, PuzzleContext, NSDictionary, UIView, BDXThreadSafeDictionary;
@protocol PuzzleHybridStateCenterProtocol, IESLiveHybridContainerDelegate, IESLivePiperProtocol, IESHYHybridViewLifecycleProtocol;

@interface PuzzleLatchLynxKitViewWrapper : NSObject <IESHYHybridViewProtocol>

@property (readonly, nonatomic) id<IESLivePiperProtocol> liveBridge;
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

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)triggerLayout;
- (id)currentRequestURL;
- (void)addPiperHandler:(id)a0;
- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)secureGoBackWithReachEndBlock:(id /* block */)a0;
- (void)addXBridgeMethods;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)initWithContext:(id)a0;
- (BOOL)canGoBack;
- (void)loadData;

@end
