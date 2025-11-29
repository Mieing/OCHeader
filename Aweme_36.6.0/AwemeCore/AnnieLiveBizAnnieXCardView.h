@class AnnieLiveBizCardLifeCycle, NSString, IESHYHybridContainerConfig, PuzzleContext, UIView, AnnieLatchData;
@protocol IESHYHybridViewProtocol, AnnieXCardModelProtocol, IESHYHybridViewLifecycleProtocol;

@interface AnnieLiveBizAnnieXCardView : AnnieXContainerCardView <IESHYHybridViewLifecycleProtocol, AnnieLiveBizContainerProtocol>

@property (copy, nonatomic) NSString *schema;
@property (readonly, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) IESHYHybridContainerConfig *configuration;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> puzzleDelegate;
@property (retain, nonatomic) PuzzleContext *puzzleContext;
@property (retain, nonatomic) AnnieLiveBizCardLifeCycle *cardLifeCycle;
@property (retain, nonatomic) UIView<IESHYHybridViewProtocol> *cardKitViewProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AnnieLatchData *latchData;
@property (retain, nonatomic) NSString *containerSessionID;
@property (readonly, nonatomic) UIView<IESHYHybridViewProtocol> *kitView;
@property (readonly, nonatomic) PuzzleContext *context;
@property (readonly, nonatomic) IESHYHybridContainerConfig *config;
@property (nonatomic) BOOL hybridInBackground;
@property (nonatomic) BOOL hybridVisiable;
@property (readonly, nonatomic) unsigned long long currentKernal;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> lifecycleDelegate;
@property (nonatomic) BOOL destroyedFlag;
@property (nonatomic) unsigned long long loadState;
@property (nonatomic) BOOL runtimeReady;
@property (nonatomic) unsigned long long containerCardType;

- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)handleViewVisiablityChange:(BOOL)a0;
- (void)handleAppActiveStateChange:(BOOL)a0;
- (void)handlePageVisiablityChange:(BOOL)a0 source:(id)a1;
- (void)registInstanceBridgeHandler:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (unsigned long long)kernalType;
- (id)liveCardName;
- (id)getKitViewProxy;
- (void)registAllInstanceBridge;
- (void)removeBridgeProvider;
- (id)getPuzzleConfig;
- (id)getPuzzleContext;
- (void)updateCardModel:(id)a0;
- (void)setupNotificationObserve;
- (void)handlePerfWarning:(id)a0;
- (void)handlePerfWarningRecovered:(id)a0;
- (void)setKitViewProxy:(id)a0;
- (void)fireLatch:(id)a0;
- (void)reuseResetState;
- (void)reuseRemoveState;
- (id)initWithSchema:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cardModel:(id)a2 configuration:(id)a3 puzzleContext:(id)a4 lifeCycleDelegate:(id)a5;
- (void)updateLiveContextToModel;
- (void)handleMemoryWarning;
- (void)load;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadURLRequest:(id)a0;

@end
