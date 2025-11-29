@class NSTimer;
@protocol RTVVoipSessionControllerInterface;

@interface RTVVoipMixSession : RTVVoipSession

@property (nonatomic) BOOL isPollingPullRoomInfoEnable;
@property (retain, nonatomic) NSTimer *firstFrameTimer;
@property (nonatomic) long long firstFrameTimerCount;
@property (nonatomic) long long firstFrameTimerMaxCount;
@property (retain, nonatomic) id<RTVVoipSessionControllerInterface> sessionController;

+ (id)createSessionWithVoip:(id)a0 injector:(id)a1;

- (void)__addObserver;
- (void)renderXREngine:(id)a0;
- (BOOL)supportInviteParticipator;
- (void)xrEngine:(id)a0 didJoinRoom:(id)a1 withUid:(id)a2;
- (void)xrEngine:(id)a0 newSessionCreatedLocal:(BOOL)a1 withUid:(id)a2;
- (void)xrEngine:(id)a0 didUserOffline:(id)a1 reason:(unsigned long long)a2;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteAudioFrameOfUid:(id)a1;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteVideoFrameOfUid:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)inviteParticipators:(id)a0 groups:(id)a1;
- (id)participator;
- (BOOL)enableInviteParticipator;
- (id)participatorID;
- (id)__userNamesWithUserIDs:(id)a0;
- (void)__renderModel:(id)a0 context:(id)a1;
- (void)__invalidateFirstFrameTimer;
- (id)__handleInviteParticipantResult:(id)a0 serverToast:(id)a1;
- (long long)__sessionTypeWithVoip:(id)a0;
- (void)__updateSessionAdapterWithVoip:(id)a0;
- (void)__onTheCallIfNeeded;
- (void)__addSessionTypeObserver;
- (id)__prejoinRoomIfNeeded;
- (id)__prepareCallerVoipInfoFromServer;
- (id)__prepareCalleeVoipInfoFromServer;
- (BOOL)__needHandleInvalidRTCInfoWithVoip:(id)a0;
- (void)__beginFirstFrameTimer;
- (void)__stateMachine:(id)a0 didTransferFrom:(id)a1 to:(id)a2 context:(id)a3;
- (void)__handleToOnTheCallWhenFirstFrameArrived;
- (BOOL)__shouldOnTheCallWhenAudioFirstFrameArrived:(id)a0;
- (void)__handleOnTheCallWhenInAppBackgroundState;
- (void)__updateSessionType;
- (long long)__1v1SessionTypeForVoipType:(long long)a0;
- (id)__isPrejoinRoomEnable;
- (id)__prepareVoipInfoFromServer;
- (void)sessionAdapter:(id)a0 showToast:(id)a1;
- (id)__pollingRoomServiceModelWithReason:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isTerminated;

@end
