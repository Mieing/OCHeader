@class NSString, IESLiveAnchorCameraPermissionManager, IESLiveCountTimer, IESLiveEnterRoomSequenceQueue, NSTimer, IESLiveRecordStateApi, IESLiveAnchorForceSuspensionCaptureHandler;
@protocol IESLiveAnchorRoomStatusChangeEvents, HTSLiveStreamEngineProvider, IESLiveRecoder;

@interface IESLiveRoomStatusManagerFragment : IESLiveRoomComponent <IESLiveAnchorRoomStatusChangeService, IESLiveAnchorEngineStateChangeService, IESLiveAnchorVCLifeCycleNotificationService, IESLiveExternalCameraEvents>

@property (nonatomic) long long monitorRoomState;
@property (retain, nonatomic) id<IESLiveAnchorRoomStatusChangeEvents> dispatcher;
@property (retain, nonatomic) IESLiveEnterRoomSequenceQueue *sequenceQueue;
@property (weak, nonatomic) id<HTSLiveStreamEngineProvider> engineProvider;
@property (retain, nonatomic) IESLiveRecordStateApi *stateApi;
@property (retain, nonatomic) IESLiveCountTimer *countTimer;
@property (nonatomic) double appResignActiveTime;
@property (retain, nonatomic) id<IESLiveRecoder> recorder;
@property (retain, nonatomic) NSTimer *pauseTimeoutTimer;
@property (retain, nonatomic) NSTimer *pauseRecordTimer;
@property (nonatomic) double lastPauseTime;
@property (retain, nonatomic) IESLiveAnchorCameraPermissionManager *cameraPermissionManager;
@property (nonatomic) unsigned long long pauseType;
@property (nonatomic) long long resumeType;
@property (nonatomic) long long closeRoomRetryCount;
@property (nonatomic) BOOL isReportedRevert;
@property (retain, nonatomic) IESLiveAnchorForceSuspensionCaptureHandler *suspensionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)componentUnmount;
- (BOOL)isFakeAudioCaptureRunning;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)onAppBecomeActive;
- (void)startLive;
- (void)liveDidAppear;
- (void)liveDidDisappear;
- (void)trackAppWillResignActive;
- (void)pauseLiveOnManuallyWithCompletion:(id /* block */)a0;
- (void)resumeLiveOnManuallyWithCompletion:(id /* block */)a0;
- (id)updateLiveWithRequest:(id)a0;
- (void)updateResourceWithRoomUpdateDecision:(id)a0;
- (void)stopLiveByForce:(BOOL)a0 reason:(long long)a1 trace:(id)a2 completion:(id /* block */)a3;
- (void)stopLiveOnlyClientWithCompletion:(id /* block */)a0;
- (id)getLiveCameraPermissionManager;
- (unsigned long long)getAnchorLivePauseType;
- (long long)getAnchorLiveResumeType;
- (void)handleStreamEnginPrepareState;
- (void)handleStreamEngineStartState;
- (void)handleStreamEngineStopState;
- (void)externalCameraDidChanged;
- (BOOL)liveTypeNeedVideoCapture;
- (void)cancelStateReport;
- (void)invalidPasueTimeoutTimer;
- (void)invalidPauseRecordTimer;
- (void)resumeLiveOnComponentDidAppear;
- (void)resumeLiveWithCheckHandler:(id /* block */)a0;
- (void)pauseLiveOnComponentDidDisappear;
- (void)updateRemoteRoomStatus:(long long)a0 reason:(long long)a1 source:(unsigned long long)a2 trace:(id)a3 isRetry:(BOOL)a4;
- (void)resumeLiveWithPlayingStatusManually;
- (void)scheduleStateReportWithImmediatelyFireTimer:(BOOL)a0 trace:(id)a1;
- (void)setupPauseTimeoutTimer;
- (void)closeRoomByDoubleCheckStatus:(long long)a0 reason:(long long)a1 source:(unsigned long long)a2 trace:(id)a3;
- (void)trackAppBecomeActiveWithLiveOn:(BOOL)a0;
- (void)reportPlayingStatusWithTrace:(id)a0;
- (void).cxx_destruct;
- (void)checkSecurity;

@end
