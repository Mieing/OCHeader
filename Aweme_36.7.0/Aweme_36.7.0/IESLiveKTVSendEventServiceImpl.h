@class NSString;
@protocol IESLiveInteractDynamicContainerProvider, IESLiveRoomService, IESLiveInteractPushStreaming;

@interface IESLiveKTVSendEventServiceImpl : NSObject <IESLiveSEIListener, IESLiveInteractionRTSMessageDispatcher, HTSLiveMessageSubscriber, IESLiveInteractionLinkerServiceAction, IESLiveKTVSendEventService>

@property (weak, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicProvider;
@property (nonatomic) double lastSendRtsTime;
@property (nonatomic) BOOL startSendEventBySelf;
@property (weak, nonatomic) id<IESLiveInteractPushStreaming> interactStreamer;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (nonatomic) BOOL isNewLiveLinkArch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)didReceiveRTSMessage:(id)a0 fromUID:(id)a1 isBroadcastMessage:(BOOL)a2;
- (void)handleSEI:(id)a0;
- (void)interactionLinkerService:(id)a0 audioPublishingChanged:(BOOL)a1 uid:(id)a2;
- (void)interactionLinkerService:(id)a0 onNetworkDetectionResult:(unsigned long long)a1 quality:(unsigned long long)a2 rtt:(int)a3 lostRate:(double)a4 bitrate:(int)a5 jitter:(int)a6;
- (void)interactionLinkerService:(id)a0 onNetworkQuality:(id)a1 remoteQualities:(id)a2;
- (void)interactionLinkerService:(id)a0 onDeviceLoopDelayReceived:(long long)a1;
- (void)interactionLinkerServiceOnNetworkTimeSynchronized:(id)a0;
- (void)audioSessionRouteChangeNotification:(id)a0;
- (void)onMusicPlayFail:(id)a0;
- (void)onMusicStatusChanged:(id)a0;
- (void)onParseredWithSEIResultOnFeed:(id)a0;
- (void)enableSendEventBySelf:(BOOL)a0;
- (void)onJoinChorusAgain:(id)a0;
- (void)onMidiScoreInfo:(id)a0;
- (void)interactionLinkerService:(id)a0 didVideoMuted:(BOOL)a1 byUid:(id)a2;
- (void)interactionLinkerService:(id)a0 didAudioMuted:(BOOL)a1 byUid:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
