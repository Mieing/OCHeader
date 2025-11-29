@class IESEZDanmakuContext, IESLiveDanmakuDisableOddTrackStrategy, IESLiveMessageHeatObserver, IESLiveDanmakuSpeedManager, NSTimer, IESLiveDanmakuMonitor, NSString;
@protocol IESLiveRoomService, IESEZDanmakuComponentLiveSceneControlComponentDelegate;

@interface IESEZDanmakuLiveSceneControlComponent : NSObject <IESLiveDanmakuSpeedChangedDelegate, IESEZDanmakuControlProtocol, IESEZDanmakuNotificationSubscriber, IESLiveMessageHeatDelegate, IESLivePublicScreenLayoutSubscriber, HTSLiveHideComponentAction, IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (nonatomic) unsigned long long liveSceneControlType;
@property (retain, nonatomic) IESLiveDanmakuSpeedManager *speedManager;
@property (nonatomic) BOOL ajustSpeedForLongDanmaku;
@property (nonatomic) BOOL enableAdjustSpeed;
@property (nonatomic) BOOL enableAdjustPadding;
@property (nonatomic) BOOL enableOdd;
@property (retain, nonatomic) IESLiveDanmakuDisableOddTrackStrategy *oddTrackStrategy;
@property (retain, nonatomic) IESLiveMessageHeatObserver *heatObserver;
@property (retain, nonatomic) NSTimer *danmakuHeatCleanTimer;
@property (nonatomic) BOOL cameraReset;
@property (retain, nonatomic) IESLiveDanmakuMonitor *danmakuMonitor;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESEZDanmakuComponentLiveSceneControlComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long controlState;

+ (id)componentType;

- (void)didSetAttachingDIContext;
- (void)hideAllComponent;
- (void)showAllComponent;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)componentDidLoad;
- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (void)prepareStart;
- (void)handleDataSpeedForDanmakuData:(id)a0;
- (void)playerDidResume;
- (void)onCameraWillChangeTo:(id)a0 source:(long long)a1;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (id)trackComponent;
- (void)setupCanvasFrameEvent;
- (void)setupCanvasWeakDisplayEvent;
- (id)settingViewComponent;
- (void)danmakuCanvasWeakDisplay:(BOOL)a0;
- (void)checkDanmakuWeakDisplayStatusOnAutoHide;
- (void)handleDataTrailingSpaceForDanmakuData:(id)a0;
- (BOOL)streamStyleWillBeChanged:(id)a0;
- (void)applySceneConfig:(id)a0 onScene:(unsigned long long)a1;
- (BOOL)sceneSwitchIsOrientaiontChanged:(unsigned long long)a0 toScene:(unsigned long long)a1;
- (long long)getCurrentAvailableTrackCount;
- (void)invalidateTimerForCleanNodes;
- (void)startTimerToCleanNodes;
- (void)discardDanmakuNodesWithStep:(long long)a0;
- (BOOL)needDiscardDanmakuData:(id)a0 WithStep:(long long)a1 currentTime:(double)a2;
- (void)danmakuSpeedDidChanged:(double)a0 currentStage:(long long)a1;
- (long long)currentChannelCountForDanmakuSpeed;
- (id)danmakuQueueToApplySpeedStrategy;
- (void)messageHeatUpLevelChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)sumCountReachedAlarmLevel;
- (long long)countOfMessages;
- (void)switchLiveSceneControlTypeTo:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void)resume;

@end
