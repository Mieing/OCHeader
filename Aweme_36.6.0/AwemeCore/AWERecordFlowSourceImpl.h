@class ACCCameraSubscription, NSArray, NSString, AWERecordFlowAIGCInterceptHandler, AWEVideoPublishViewModel, AWEStudioRecorderFeatureCaptureConfig, AWERecordFlowUseData;
@protocol ACCRecordSwitchModeService, AWERecordHDPhotoService, AWEStudioBusinessCameraFlowControlProtocol, ACCRecordSystemLivePhotoService, AWERecordFlowBridgeBusiness, ACCRecordActionFlowBridgeService, AWEStudioRawTypePropServiceProtocol, ACCCameraService, IESServiceProvider;

@interface AWERecordFlowSourceImpl : NSObject <AWEStudioBusinessCameraBasicActionProtocol, AWERecordFlowSourceService>

@property (retain, nonatomic) AWEStudioRecorderFeatureCaptureConfig *featureConfig;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraFlowService;
@property (weak, nonatomic) id<ACCRecordActionFlowBridgeService> bridgeFlowService;
@property (weak, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (weak, nonatomic) id<AWERecordHDPhotoService> hdPhotoService;
@property (weak, nonatomic) id<AWEStudioRawTypePropServiceProtocol> rawTypePropService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) NSArray *interceptHandlers;
@property (retain, nonatomic) AWERecordFlowAIGCInterceptHandler *aigcInterceptHandler;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL consumeTouchGesture;
@property (retain, nonatomic) AWERecordFlowUseData *useData;
@property (retain, nonatomic) id<AWERecordFlowBridgeBusiness> bridgeBusinessService;
@property (nonatomic) BOOL forbidRecordVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL continueRecordWhenFingersAway;

+ (id)createEditableImageCaptureOptionsWithImageFolder:(id)a0;

- (BOOL)currentIsRecordFlow;
- (void)cameraFlowActionCompletion:(BOOL)a0;
- (BOOL)needBlockAnimationTouches:(id)a0;
- (BOOL)enableRecordFlowOpt;
- (void)interactionStartEventWith:(id)a0;
- (void)interactionEndEvent;
- (void)takePictureFlowActionWith:(id)a0;
- (void)recordVideoFlowActionWith:(id)a0;
- (void)segmentRecordVideoFlowActionWith:(id)a0;
- (void)finishedRecordFlowAction;
- (void)pauseRecordVideoFlowAction;
- (void)cancelRecordFlowAction;
- (void)deletedLastFragmentWhenSegmentRecord;
- (void)captureAnimationViewTouchBegan:(id)a0;
- (void)captureAnimationViewTouchMoved:(id)a0;
- (void)captureAnimationViewTouchEnd:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1 featureConfig:(id)a2;
- (id)defaultUseData;
- (BOOL)customShootIsInterceptWith:(id)a0;
- (void)recordVideo;
- (void)continueRecordVideoWhenSegment;
- (void)finishRecordVideo;
- (void)pauseRecordVideo;
- (void)livePhoto:(double)a0;
- (void)updateEditableImageAction:(id)a0;
- (void)recordVideoAction;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)takePicture;

@end
