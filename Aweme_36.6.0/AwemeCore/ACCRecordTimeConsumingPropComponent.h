@class UIButton, NSString;
@protocol ACCRecordFlowControlService, ACCRecordPropService, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordUIHiddenStrategyService, ACCRecordTimeConsumingPropFlowControlService, AWEStudioBusinessCameraFlowControlProtocol, ACCShootSourceService, AWERecordFlowSourceService, ACCRecordFlowService, ACCCameraService, ACCRecordButtonService;

@interface ACCRecordTimeConsumingPropComponent : ACCFeatureComponent <ACCPanelViewDelegate, ACCRecordSwitchModeServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordTimeConsumingPropFlowControlServiceSubscriber, ACCShootSourceServiceSubscriber, ACCRecordFlowControlServiceSubscriber, AWEStudioBusinessCameraBasicActionProtocol>

@property (weak, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCRecordTimeConsumingPropFlowControlService> timeConsumingPropFlowControlService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordButtonService> buttonService;
@property (weak, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (weak, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraFlowService;
@property (weak, nonatomic) id<AWERecordFlowSourceService> flowSourceService;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL shouldResetProp;
@property (nonatomic) long long currentModeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)flowServiceDidEnterNextPageWithMode:(id)a0;
- (void)flowServiceStartShowCountDownAnimation:(long long)a0;
- (void)panelViewController:(id)a0 willDismissPanelView:(id)a1;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (void)cameraFlowActionStepChangedWith:(unsigned long long)a0 currentStep:(unsigned long long)a1;
- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)pauseRecord;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)didClickCancelButton:(id)a0;
- (void)bindServices:(id)a0;
- (void)hideItemsAndShowCancelButton;
- (void)resetForTimeConsumingProp;
- (void)p_resetPropIfNeeded:(BOOL)a0;
- (void)sendStartGeneratingMessage;
- (void)takePictureWithSource:(id)a0;
- (void)resetAIStatus;
- (void)sendResetGeneratingMessage;
- (void)deselectPhotoPickerAssetsIfNeeded;
- (void)startRecordWithSource:(id)a0;
- (void)pauseRecordAndtakePicture;
- (void)pauseRecordAfter;
- (void)trackTimeConsumingPropCancel;
- (void)p_sendResetGeneratingMessage;
- (BOOL)isCurrentPropRealtime;
- (void)startRecordFlowWithSource:(id)a0;
- (void)stopRecordFlowWithSource:(id)a0;
- (void)completeRecordFlowWithSource:(id)a0;
- (void)shootSourceServiceEndTouch:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)removeCancelButton;
- (void)addCancelButton;

@end
