@class NSString;
@protocol ACCRecordSwitchModeService, ACCRecordFlowService, ACCRecordFlowConfigProtocol, ACCRecordFlowControlService, ACCCameraService;

@interface ACCPictureFlowComponent : ACCFeatureComponent <ACCRecordFlowHandler, ACCRecordFlowServiceSubscriber, ACCCameraLifeCircleEvent>

@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordFlowConfigProtocol> flowConfig;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL firstFrameHasRendered;
@property (nonatomic) BOOL hasTakePictureAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraService:(id)a0 stopVideoCaptureWithError:(id)a1;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)flowServiceDidTakePicture:(id)a0 error:(id)a1;
- (unsigned long long)preferredLoadPhase;
- (long long)currentModeId;
- (void)bindServices:(id)a0;
- (void)startRecordFlowWithSource:(id)a0;
- (BOOL)canStopWithSource:(id)a0;
- (void)prepareForInfiniIfNeededImage:(id)a0;
- (void)tryTakePicture;
- (void).cxx_destruct;

@end
