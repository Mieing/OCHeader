@class IESLiveLinkInteractStreamImp_Douyin, IESLiveDirectorRoomModel, IESLiveInteractiveMediaService, IESLiveAudioCapturerImp, NSString;
@protocol IESLivePushStreamLifeCycle, IESLiveDirectorStatusDelegate;

@interface IESLiveDirectorStreamPushHandler : NSObject <IESLiveInteractiveMediaServiceDelegate>

@property (retain, nonatomic) id<IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (retain, nonatomic) IESLiveLinkInteractStreamImp_Douyin *realInteractStreamer;
@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) IESLiveDirectorRoomModel *roomModel;
@property (retain, nonatomic) IESLiveAudioCapturerImp *audioCaptureProcessor;
@property (weak, nonatomic) id<IESLiveDirectorStatusDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomModel:(id)a0;
- (void)setupMediaService;
- (void)interactiveMediaServiceDidStart:(id)a0;
- (void)interactiveMediaService:(id)a0 didPublishStreamOfUser:(id)a1;
- (void)interactiveMediaServiceWillEnd:(id)a0;
- (void)interactiveMediaService:(id)a0 receivesError:(id)a1;
- (void)interactiveMediaServiceAppResignActive;
- (void)interactiveMediaServiceAppDidActive;
- (void)interactiveMediaService:(id)a0 onInteractAudioVolumeInfo:(id)a1;
- (id)normalStreamConfigWith:(id)a0;
- (void)startNormalStreamingWithConfig:(id)a0;
- (id)transferAudioConfig:(id)a0;
- (id)transferStreamConfig:(id)a0;
- (void)closeDirectorStreamPush;
- (void)loadDirectorStreamPush;
- (void)muteAndStopLocalAudio:(BOOL)a0;
- (void)muteAndStopLocalVideo:(BOOL)a0;
- (void)startAudioCaptureWithPrivacyCert:(id)a0 reason:(id)a1;
- (void).cxx_destruct;
- (struct { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })outputConfig;

@end
