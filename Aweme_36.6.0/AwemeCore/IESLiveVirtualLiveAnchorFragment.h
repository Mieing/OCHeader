@class HTSLiveExpandToolbarItem, NSMutableDictionary, NSString, IESLiveInteractiveMediaService, UIView, IESLiveGCDTimer, NSLock;
@protocol IESLiveXPlayModelProtocol, IESLiveInteractXPlayService, IESLivePiperProtocol, IESLiveSEISenderService, IESLiveRealStreamingProvider;

@interface IESLiveVirtualLiveAnchorFragment : IESLiveRoomComponent <IESLiveInteractiveMediaServiceDelegate, IESLiveAnchorRoomStatusChangeEvents, IESLiveInteractXPlayDelegate, IESLiveVirtualLiveAnchorRouter, IESLiveInteractiveStreamLayout, HTSLiveMessageSubscriber, IESLiveCameraZoomAction>

@property (weak, nonatomic) id<IESLiveInteractXPlayService> xPlayService;
@property (retain, nonatomic) id<IESLiveXPlayModelProtocol> xPlayModel;
@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) UIView *cameraPreview;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *toolbarItem;
@property (retain, nonatomic) IESLiveGCDTimer *seiTimer;
@property (nonatomic) double ueFrameTimestamp;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamingProvider;
@property (weak, nonatomic) id<IESLiveSEISenderService> seiSender;
@property (weak, nonatomic) id<IESLivePiperProtocol> lynxPiper;
@property (retain, nonatomic) NSMutableDictionary *trackTimestamps;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)didReceiveRTCCustomMessageWithString:(id)a0;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)mountDidFinishForLevel:(long long)a0;
- (id)commonTrackParams;
- (void)disableInteractive;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)cameraPositionChanged;
- (void)setupToolbarItem;
- (void)setupMediaService;
- (void)interactiveMediaServiceDidStart:(id)a0;
- (void)interactiveMediaService:(id)a0 didPublishStreamOfUser:(id)a1;
- (void)interactiveMediaService:(id)a0 receivesError:(id)a1;
- (void)interactiveMediaService:(id)a0 newSessionCreated:(id)a1 local:(BOOL)a2;
- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (BOOL)isVirtualLiveOpen;
- (BOOL)shouldShowVirtualAvatarBackCameraToast;
- (void)recordVirtualAvatarBackCameraToast;
- (void)notifyLynxWithInfo:(id)a0;
- (void)updateUEInfoWithMessageInfo:(id)a0 notifyLynx:(BOOL)a1;
- (void)startStatusDidChange:(unsigned long long)a0 errorCode:(long long)a1;
- (void)playStatusDidUpdated:(long long)a0 errorCode:(long long)a1;
- (void)cloudPlayerPlayStatusDidUpdated:(unsigned long long)a0 cloudPlayer:(id)a1 errorCode:(long long)a2;
- (void)onReceiveRemoteFrameTimestamp:(double)a0;
- (void)onFullLinkDelayResult:(double)a0;
- (void)removeCameraPreview;
- (void)invalidSEITimer;
- (void)updateCameraPreview:(BOOL)a0;
- (void)setupTrackTimestamps;
- (void)trackUEDurationWithType:(long long)a0;
- (void)addCameraPreview;
- (void)trackUEOperationResultWithMessageID:(int)a0 success:(BOOL)a1 isVideoPreview:(BOOL)a2;
- (void)startSEITimer;
- (void)cameraFirstFrameActions;
- (void)setupWTNStreamMixing;
- (void)showCloseRoomAlert;
- (void)updateTrackTimestampsWithType:(long long)a0;
- (void)openVirtualLiveInteractPage;
- (void)setCameraFpsIfNeededWithLiveCoreInfo:(id)a0;
- (void)pushTimestampSEI;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
