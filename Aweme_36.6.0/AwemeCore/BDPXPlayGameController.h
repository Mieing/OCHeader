@class BDPRuntimeGame, NSString, UIView;
@protocol BDPXPlayInstanceProtocol, BDPEngineProtocol, BDPToolBarViewProtocol, BDPMonitorableObjectProtocol;

@interface BDPXPlayGameController : BDPNativeGameBaseController <BDPJSUncaughtExceptionMessage>

@property (weak, nonatomic) BDPRuntimeGame *runtime;
@property (retain, nonatomic) id<BDPEngineProtocol, BDPMonitorableObjectProtocol> engine;
@property (retain, nonatomic) UIView *gameView;
@property (weak, nonatomic) UIView<BDPToolBarViewProtocol> *toolBarView;
@property (weak, nonatomic) id<BDPXPlayInstanceProtocol> xplayInstance;
@property (nonatomic) BOOL coldBootFlag;
@property (copy, nonatomic) NSString *routerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppEnterBackground;
- (void)startExceptionMonitor;
- (void)initGameView;
- (void)onAppEnterForeground;
- (id)getCloudGameView;
- (void)loadGameContent;
- (void)eventMpRenderStart;
- (id)getXplayInstance;
- (void)stopExceptionMonitor;
- (id)getCurrentGameView;
- (void)setupGameView;
- (void)updateLaunchInfo;
- (void)gameViewPause;
- (void)gameViewResume;
- (void)gameViewStop;
- (void)updateGameViewAlpha:(double)a0;
- (void)cloudGameFirstFrameReached:(id)a0 uniqueId:(id)a1;
- (void)xplayLoadFailed:(id)a0 uniqueId:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)navigationBarHidden;
- (id)initWithUniqueID:(id)a0;

@end
