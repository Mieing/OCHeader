@class BDPRuntimeGame, NSString, BDPGameExceptionMonitor, UIView;
@protocol BDPEngineProtocol, BDPXPlayInstanceProtocol, BDPMonitorableObjectProtocol;

@interface BDPGameController : BDPNativeGameBaseController <BDPJSUncaughtExceptionMessage, BDPScreenRecorderFactoryProtocol>

@property (weak, nonatomic) BDPRuntimeGame *runtime;
@property (retain, nonatomic) id<BDPEngineProtocol, BDPMonitorableObjectProtocol> engine;
@property (retain, nonatomic) BDPGameExceptionMonitor *exceptionMonitor;
@property BOOL inBackground;
@property (nonatomic) long long backgroundTs;
@property (nonatomic) long long currentVCSwitchCount;
@property (copy, nonatomic) NSString *routerID;
@property (nonatomic) long long appBackgroundSwitchCount;
@property (weak, nonatomic) id<BDPXPlayInstanceProtocol> xplayInstance;
@property (nonatomic) BOOL isShowCloudGame;
@property (readonly, nonatomic) UIView *gameView;
@property (nonatomic) BOOL isCompositeVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)startExceptionMonitor;
- (void)initGameView;
- (void)onAppEnterForeground;
- (void)uncaughtException:(id)a0 inJSContext:(id)a1 withUniqueID:(id)a2;
- (id)getCloudGameView;
- (void)eventCpJsLoadStart;
- (void)eventCpJsLoadResult:(id)a0;
- (void)eventMpRenderStart;
- (id)getOrCreateScreenRecorder;
- (id)getXplayInstance;
- (void)stopExceptionMonitor;
- (BOOL)isHotCache;
- (void)setupCloudGameView;
- (id)getCurrentGameView;
- (void)setupGameView;
- (void)updateLaunchInfo;
- (void)gameViewPause;
- (void)gameViewResume;
- (void)gameViewStop;
- (void)updateGameViewAlpha:(double)a0;
- (id)paramForMemoryKill;
- (void)cloudGameFirstFrameReached:(id)a0 uniqueId:(id)a1;
- (void)xplayLoadFailed:(id)a0 uniqueId:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appDidEnterBackground;
- (id)initWithUniqueID:(id)a0;

@end
