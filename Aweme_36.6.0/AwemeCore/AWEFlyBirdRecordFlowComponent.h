@class NSString, ACCLightningRecordAnimationView;
@protocol ACCRecordSwitchModeService, ACCRecordFlowService, ACCRecordFlowConfigProtocol, ACCCameraService, ACCRecordConfigService, ACCVideoConfigProtocol;

@interface AWEFlyBirdRecordFlowComponent : ACCRecordFlowComponent <ACCRecordConfigDurationHandler, ACCCaptureButtonAnimationViewDelegate>

@property (retain, nonatomic) ACCLightningRecordAnimationView *recordAnimationView;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordFlowConfigProtocol> flowConfig;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordConfigService> configService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceDidMarkDuration:(double)a0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceDidTakePicture:(id)a0 error:(id)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)animationViewDidSwitchToHoldSubtype;
- (void)animationViewDidReceiveTap;
- (BOOL)canTakePhotoWithTap;
- (void)bindServices:(id)a0;
- (BOOL)isSupportPressToVideo;
- (void)updateStandardDurationIndicatorDisplay;
- (void)updateLightingStyleRecordButtonLightingViewWithMode:(id)a0;
- (BOOL)p_currentSwitchModeNeedStartVideo;
- (id)lightningProgressView;
- (void)stopRecordButtonAnimationWithIgnoreProgress:(BOOL)a0;
- (void)updateProgressAndMarksDisplay;
- (id)buildCaptureButton;
- (void)didSetMaxDuration:(double)a0;
- (void).cxx_destruct;
- (void)updateProgressBar;

@end
