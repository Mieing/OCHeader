@class IESLiveInteractiveMediaService, IESLiveCloudCollaborateRTCServiceConfig, NSString;
@protocol IESLiveCloudCollaborateMonitor, IESLiveCloudCollaborateRTCServiceDelegate, IESLiveRealStreamingProvider;

@interface IESLiveCloudCollaborateRTCService : NSObject <IESLiveInteractiveMediaServiceDelegate, IESLiveInteractiveStreamLayout, IESLiveInteractionRTSMessageDispatcher>

@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamingProvider;
@property (retain, nonatomic) IESLiveCloudCollaborateRTCServiceConfig *config;
@property (retain, nonatomic) id<IESLiveCloudCollaborateMonitor> monitor;
@property (weak, nonatomic) id<IESLiveCloudCollaborateRTCServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateAudioState:(id)a0;
- (id)perfModel;
- (id)rtcExtraInfo;
- (void)interactiveMediaServiceDidStart:(id)a0;
- (void)interactiveMediaService:(id)a0 didPublishStreamOfUser:(id)a1;
- (void)interactiveMediaService:(id)a0 receivesError:(id)a1;
- (void)interactiveMediaService:(id)a0 onUserJoined:(id)a1 extraInfo:(id)a2;
- (void)interactiveMediaService:(id)a0 firstRemoteVideoWithLinkmicUid:(id)a1;
- (void)interactiveMediaService:(id)a0 newSessionCreated:(id)a1 local:(BOOL)a2;
- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (void)startJoinChannel;
- (void)didReceiveRTSMessage:(id)a0 fromUID:(id)a1 isBroadcastMessage:(BOOL)a2;
- (void)monitorWithStep:(id)a0 extra:(id)a1;
- (void)stopJoinChannel;
- (void)createRtcServiceWithConfig:(id)a0;
- (void)stopWTNPush;
- (int)muteAudioStreamWithId:(id)a0 mute:(BOOL)a1 reason:(id)a2;
- (id)getLiveCoreParams;
- (void)startWTNPush;
- (int)muteVideoStreamWithId:(id)a0 mute:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
