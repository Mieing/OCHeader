@class IESLiveLGameInteractStreamLayout, NSString, IESLiveLGameDuringLiveModel, IESLiveInteractiveMediaService, IESLiveInteractiveUserService;
@protocol IESLiveLGameInteractInstanceDelegate, IESLiveRealStreamingProvider;

@interface IESLiveLGameInteractInstance : NSObject <IESLiveInteractiveMediaServiceDelegate>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraRect;
@property (retain, nonatomic) IESLiveLGameDuringLiveModel *gameModel;
@property (retain, nonatomic) IESLiveInteractiveUserService *userService;
@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) IESLiveLGameInteractStreamLayout *streamLayout;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (weak, nonatomic) id<IESLiveLGameInteractInstanceDelegate> delegate;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)interactiveMediaServiceDidStart:(id)a0;
- (void)interactiveMediaService:(id)a0 receivesError:(id)a1;
- (void)interactiveMeidaServiceLostConnection:(id)a0;
- (void)interactiveMediaService:(id)a0 firstRemoteVideoWithLinkmicUid:(id)a1;
- (void)interactiveMediaService:(id)a0 didOfflineOfUid:(id)a1 sessions:(id)a2 reason:(unsigned long long)a3;
- (void)interactiveMediaService:(id)a0 onMixEventStartSuccessWithMixType:(long long)a1;
- (void)updateCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadMediaService;
- (id)buildXPlayUserService:(id)a0;
- (void)handleStatusStart;
- (void)handleStatusRemoteFirstFrame;
- (void)handleStatusStop;
- (id)userModelWrapperConfig;
- (id)initWithDelegate:(id)a0 gameModel:(id)a1;
- (id)phaseString;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)changeStatusTo:(long long)a0;

@end
