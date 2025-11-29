@class ACCCameraSubscription, NSString, AWEVideoPublishViewModel, IESMMLivePhotoConfig, ACCSystemLivePhotoFramesRecorder;
@protocol ACCRecorderProtocol, ACCRecordFlowService, IESServiceProvider, VERecorderPublicProtocol, ACCRecordSystemLivePhotoService;

@interface ACCRecorderSystemLivePhotoWrapper : NSObject <ACCCameraBuildListener, ACCRecordFlowServiceSubscriber, ACCCameraSystemLivePhotoProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<IESServiceProvider> serviceResolver;
@property (weak, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (nonatomic) double livePhotoMaxDuration;
@property (retain, nonatomic) IESMMLivePhotoConfig *livePhotoConfig;
@property (retain, nonatomic) ACCSystemLivePhotoFramesRecorder *livePhotoFramesRecorder;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<ACCRecorderProtocol> recorder;
@property (nonatomic) long long livePhotoStatus;
@property (nonatomic) BOOL isFirstRenderFinish;
@property (nonatomic) BOOL expectCloseSystemLivePhoto;

- (double)getLivePhotoDuration;
- (int)finishLivePhotoRecord:(double)a0;
- (id)initWithPublishModel:(id)a0;
- (void)setCameraProvider:(id)a0;
- (void)closeSystemLivePhotoRecordingisClearData:(BOOL)a0 completion:(id /* block */)a1;
- (void)obtainSystemLivePhotoRecordingData:(id /* block */)a0;
- (void)onCameraInit:(id)a0;
- (void)setSystemLivePhotoTimeMaxDuration:(double)a0;
- (void)startSystemLivePhotoRecordingWithCaptureAudio:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetSystemLivePhotoCache;
- (void)cancelCurrentLivePhotoRecordTaskWithCompletion:(id /* block */)a0;
- (void)startFrames;
- (void)livePhotoModeChangedWithOpen:(BOOL)a0 livePhotoConfig:(id)a1 completion:(id /* block */)a2;
- (void)stopFrames;
- (void)clearSystemLivePhotoData;
- (void)clearFrames;
- (void).cxx_destruct;
- (id)recorder;
- (void)addSubscriber:(id)a0;

@end
