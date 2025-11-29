@class AWEStudioRecorderFeatureCaptureConfig, NSString, AWEVideoPublishViewModel;
@protocol ACCRecordTimeConsumingPropFlowControlService, ACCCameraService, IESServiceProvider, ACCRecordFlowControlService, ACCRecordActionFlowBridgeService, ACCRecordPropService, ACCRecordAuthService;

@interface AWERecordFlowBridgeBusinessImpl : NSObject <AWERecordFlowBridgeBusiness>

@property (retain, nonatomic) AWEStudioRecorderFeatureCaptureConfig *featureConfig;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordActionFlowBridgeService> bridgeFlowService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordAuthService> authService;
@property (weak, nonatomic) id<ACCRecordTimeConsumingPropFlowControlService> propFlowControlService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceProvider:(id)a0 repository:(id)a1 featureConfig:(id)a2;
- (void)takePictureProProcessWith:(id)a0;
- (void)takePicturePostProcessWith:(id)a0;
- (BOOL)canSupportRecordVideo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })calculateRecordMaxDuration;
- (id)createCameraRecordVideoParams;
- (void)updateCameraRecordVideoFragmentInfoWith:(id)a0;
- (BOOL)recordVideoProProcessWith:(id)a0;
- (void)recordVideoPostProcessWith:(id)a0;
- (void)recordVideoPauseWith:(id)a0;
- (void)recordVideoStopProWith:(id)a0;
- (void)recordVideoStopPost;
- (void)recordVideoCancel;
- (void).cxx_destruct;

@end
