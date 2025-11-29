@class NSString, IESLiveXPlayInteractStreamLayout, IESLiveInteractiveMediaService, IESLiveXPlayInteractInstanceModel, IESLiveXPlayGameModel, IESLiveInteractiveUserService;
@protocol IESLiveRealStreamingProvider, IESLiveXPlayInteractInstanceDelegate;

@interface IESLiveXPlayInteractInstance : NSObject <IESLiveInteractiveMediaServiceDelegate>

@property (nonatomic) long long status;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraRect;
@property (nonatomic) BOOL hideCameraRegion;
@property (weak, nonatomic) id<IESLiveXPlayInteractInstanceDelegate> delegate;
@property (retain, nonatomic) IESLiveXPlayInteractInstanceModel *configModel;
@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) IESLiveInteractiveUserService *userService;
@property (retain, nonatomic) IESLiveXPlayInteractStreamLayout *streamLayout;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (retain, nonatomic) IESLiveXPlayGameModel *gameModel;
@property (retain, nonatomic) NSString *wtnStreamID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xplayInteractWithModel:(id)a0 delegate:(id)a1 diContext:(id)a2;

- (void)didSetAttachingDIContext;
- (void)interactiveMediaServiceBeforeJoinChannel:(id)a0 success:(BOOL)a1;
- (void)interactiveMediaService:(id)a0 receivesError:(id)a1;
- (void)interactiveMeidaServiceLostConnection:(id)a0;
- (void)interactiveMediaService:(id)a0 firstRemoteVideoWithLinkmicUid:(id)a1;
- (void)interactiveMediaService:(id)a0 didOfflineOfUid:(id)a1 sessions:(id)a2 reason:(unsigned long long)a3;
- (void)interactiveMediaService:(id)a0 onMixEventStartSuccessWithMixType:(long long)a1;
- (void)interactiveMediaService:(id)a0 onFirstPublicStreamVideoFrameDecoded:(id)a1;
- (void)updateCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadMediaService;
- (id)buildXPlayUserService:(id)a0;
- (void)handleStatusStart;
- (void)handleStatusRemoteFirstFrame;
- (void)handleStatusStop;
- (id)userModelWrapperConfig;
- (id)initWithConfig:(id)a0 delegate:(id)a1 gameModel:(id)a2;
- (void)startWtnStream;
- (void)stopWtnStream;
- (void)handleEventCameraOpen;
- (void).cxx_destruct;
- (void)changeStatusTo:(long long)a0;

@end
