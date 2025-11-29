@class ACCCameraSubscription, DUXPopover, NSString, AWEStudioComposerRecordLivePhotoFeature, AWEVideoPublishViewModel, ACCGroupedPredicate;
@protocol ACCCameraService, ACCRecordFlowService, ACCRecordFlowControlService, ACCRecordSwitchModeService, AWERecordFlowSourceService, IESServiceProvider;

@interface ACCRecordSystemLivePhotoServiceImpl : NSObject <ACCRecordSystemLivePhotoService>

@property (retain, nonatomic) AWEStudioComposerRecordLivePhotoFeature *featureConfig;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCGroupedPredicate *isSystemLivePhotoFlowPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *showHoldingTipPredicate;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<AWERecordFlowSourceService> cameraFlowSourceService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) double beginEnterNextPageTimestamp;
@property (nonatomic) BOOL isReopening;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) BOOL enableSystemLivePhoto;
@property (nonatomic) BOOL isVEOpenLivePhoto;
@property (nonatomic) BOOL isLivePhotoRecording;
@property (nonatomic) BOOL isLivePhotoCaptureImageError;
@property (nonatomic) BOOL isDelayWaitingForCoverImage;
@property (nonatomic) BOOL isEnterNextPageJumping;
@property (nonatomic) BOOL isLivePhotoFirstEnterAutoOpen;
@property (nonatomic) BOOL isDowngradeVideoToPicture;
@property (nonatomic) BOOL hasGuideShowInLifeCycle;
@property (weak, nonatomic) DUXPopover *showGuidePopView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startSystemLivePhotoRecordingWithCompletion:(id /* block */)a0;
- (void)closeSystemLivePhotoRecordingsClearData:(BOOL)a0 completion:(id /* block */)a1;
- (void)reopenSystemLivePhotoRecording;
- (void)takeLivePhotoPicture;
- (void)cancelLivePhotoPictureTask;
- (BOOL)isLowerDevice;
- (void)toggleLivePhotoRecordStartAction;
- (void)toggleLivePhotoRecordFinishAction;
- (void)toggleLivePhotoRecordCancelAction;
- (id)getLivePhotoFirstFrameImage;
- (void)saveEnterNextPageTimestamp;
- (BOOL)systemLivePhotoOpened;
- (void)livePhotoPreProcessCompletion:(id /* block */)a0;
- (void)livePhotoPostProcessWith:(id)a0 completion:(id /* block */)a1;
- (void)livePhotoRecordVideoFinished;
- (void)cameraFlowControlCloseLivePhoto:(id /* block */)a0;
- (BOOL)inOpenCreativePath;
- (id)initWithPublishModel:(id)a0 serviceProvider:(id)a1 featureConfig:(id)a2;
- (BOOL)p_enableSystemLivePhoto:(id)a0 featureConfig:(id)a1;
- (void)p_takeLivePhotoPicture:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)needCaptureAudio;
- (void)toggleLivePhotoInnerSwitch:(BOOL)a0;
- (double)getLivephotoForwardDuration;
- (double)getHistoryEnterNextPageTimestamp;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
