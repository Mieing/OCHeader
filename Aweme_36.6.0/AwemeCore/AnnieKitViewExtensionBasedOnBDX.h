@class BDXThreadSafeDictionary, PuzzleContext, NSString, NSMutableDictionary, UIView, NSDictionary, UIViewController;
@protocol AnnieXContainerBaseProtocol, BDXViewContainerProtocol, BDXKitViewProtocol, IESLivePiperProtocol, PuzzleHybridStateCenterProtocol, IESHYHybridViewLifecycleProtocol, IESLiveHybridContainerDelegate;

@interface AnnieKitViewExtensionBasedOnBDX : NSObject <IESHYHybridViewProtocol>

@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *bdxViewContainer;
@property (weak, nonatomic) UIView<AnnieXContainerBaseProtocol> *anniexContainer;
@property (weak, nonatomic) UIView<BDXKitViewProtocol> *bdxKitView;
@property (retain, nonatomic) id<IESLivePiperProtocol> liveBridge;
@property (retain, nonatomic) PuzzleContext *puzzleContext;
@property (weak, nonatomic) UIViewController *currentVC;
@property (readonly, nonatomic) long long currentViewType;
@property (readonly, nonatomic) NSString *currentEngineType;
@property (retain, nonatomic) NSMutableDictionary *initialMethodsMapForRetain;
@property (copy, nonatomic) NSDictionary *releaseLog;
@property (nonatomic) long long showTime;
@property (copy, nonatomic) NSString *uniqueId;
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

+ (id)proxyForAnnieXViewContainer:(id)a0 anniexKitView:(id)a1;
+ (id)proxyForBDXViewContainer:(id)a0 bdxKitView:(id)a1;

- (void)setDisableEndEditingWhenRemoveFromSuperview:(BOOL)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)triggerLayout;
- (id)currentRequestURL;
- (void)addPiperHandler:(id)a0;
- (void)setupBridge:(id)a0 withKitViewProxy:(id)a1;
- (id)initialMethodsMap;
- (BOOL)isAnnieX;
- (id)getCustomPerformanceTiming;
- (id)initWithBDXViewContainer:(id)a0 bdxKitView:(id)a1;
- (BOOL)customCallbackClose;
- (void)p_reportLynxReleaseSendLog;
- (id)initWithAnnieXContainerCard:(id)a0 anniexKitView:(id)a1;
- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)reportReleaseSendLog;
- (id)liveBusiness;
- (void)saveReleaseSendLog:(id)a0;
- (id)getAnnieXKitView;
- (void)secureGoBackWithReachEndBlock:(id /* block */)a0;
- (void)addXBridgeMethods;
- (void)iesLiveHybridContainerClose:(id)a0 keepOffline:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)engineType;
- (long long)viewType;
- (BOOL)canGoBack;
- (BOOL)isKindOfClass:(Class)a0;
- (void)dealloc;
- (id)context;
- (void)loadData;
- (void)_setupViewController;

@end
