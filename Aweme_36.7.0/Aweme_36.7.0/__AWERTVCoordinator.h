@class NSMutableDictionary, RxScheduler, RxMultipleDelegate, NSString, RTVVoipMonitor;
@protocol RTVCoordinatorObserver, RTVSettingsManager, RxInjector, RTVXRMonitor, RTVVoipContextManagerInterface;

@interface __AWERTVCoordinator : NSObject <RTVCoordinator, AWELiveRoomMessage, RTVVoipObserver, AWEFormatRoomMessage>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContext;
@property (readonly, nonatomic) id<RTVXRMonitor> xrmonitor;
@property (readonly, nonatomic) RxMultipleDelegate<RTVCoordinatorObserver> *observers;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (retain, nonatomic) NSMutableDictionary *sessionMapper;
@property BOOL isCaptureSessionRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)isInFormatVoiceChat;
- (void)audienceEnterLiveRoom;
- (void)audienceQuitAllRoom;
- (void)anchorStartLive;
- (void)anchorEndLive;
- (id)isInFormatLive;
- (void)userEnterFormatDigitalHumanRoom;
- (void)userLeaveFormatDigitalHumanRoom;
- (void)__observerCaptureSessionRunningState;
- (void)__updateCaptureSessionStartRunning;
- (void)__updateCaptureSessionStopRunning;
- (id)currentInterruptSessions;
- (BOOL)isLiveStreamingForInterruptSessions:(id)a0;
- (BOOL)isAudienceLiveRoomForInterruptSessions:(id)a0;
- (BOOL)isFormatLive;
- (BOOL)isFormatVoiceChat;
- (id)__checkEnableRTV:(long long)a0 operationType:(long long)a1 roomID:(id)a2 ignoreSessionType:(id)a3;
- (id)__checkEnableVoipWithOperationType:(long long)a0 roomID:(id)a1 ignoreSessionType:(id)a2;
- (void)__showToast:(id)a0;
- (void)__startInterruptSession:(long long)a0 context:(id)a1;
- (void)__endInterruptSession:(long long)a0 context:(id)a1;
- (id)checkEnableInvokeRTV:(long long)a0 ignoreSessionType:(id)a1;
- (id)checkEnableJoinRTV:(long long)a0 withRoomID:(id)a1 ignoreSessionType:(id)a2;
- (id)checkEnableReceiveRTV:(long long)a0;
- (id)isAudienceLiveRoom;
- (id)leaveLiveRoomForVoIP:(id)a0;
- (void)closeHamletWorld;
- (id)leaveFormatLiveRoomForVoIP:(id)a0;
- (BOOL)isFormatDigitalHumanRoomForInterruptSessions:(id)a0;
- (id)leaveFormatVoiceChatRoomForVoIP:(id)a0;
- (void)voipServiceWillBegin:(id)a0 voip:(id)a1;
- (void)voipServiceDidFinish:(id)a0 voip:(id)a1;
- (void)voipService:(id)a0 voip:(id)a1 didSwitchNarrow:(BOOL)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)isLive;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)isLiveStreaming;

@end
