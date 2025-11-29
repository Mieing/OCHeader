@class RTCInfo, NSMapTable, NSString, IESLiveInteractiveMediaService;
@protocol IESLiveRoomService, IESLiveAnchorDirectorStreamDelegate;

@interface IESLiveAnchorDirectorStreamHandler : NSObject <IESLiveInteractiveMediaServiceDelegate, IESLiveInteractiveStreamLayout>

@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) NSMapTable *linkMicRTCView;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) RTCInfo *rtcInfo;
@property (weak, nonatomic) id<IESLiveAnchorDirectorStreamDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopInteractDirector;
- (void)subscribeRemoteAudio:(id)a0 isMute:(BOOL)a1;
- (id)initWithRoom:(id)a0 rtcInfo:(id)a1;
- (void)muteAllRemoteAudio;
- (id)sessionViewWithLinkmicId:(id)a0;
- (void)setupMediaService;
- (void)insertRTCSessionView:(id)a0 linkmicID:(id)a1;
- (void)interactiveMediaServiceDidStart:(id)a0;
- (void)interactiveMediaService:(id)a0 didPublishStreamOfUser:(id)a1;
- (void)interactiveMediaService:(id)a0 receivesError:(id)a1;
- (void)interactiveMediaService:(id)a0 firstRemoteVideoWithLinkmicUid:(id)a1;
- (void)interactiveMediaService:(id)a0 firstFrameRenderCallback:(id)a1;
- (void)interactiveMediaService:(id)a0 newSessionCreated:(id)a1 local:(BOOL)a2;
- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (void)subscribeRemoteVideo:(id)a0 isMute:(BOOL)a1;
- (void).cxx_destruct;

@end
