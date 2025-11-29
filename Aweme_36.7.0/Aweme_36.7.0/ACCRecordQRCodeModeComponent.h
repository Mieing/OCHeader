@class ACCCameraScanQRCodePerformanceTimestamp, ACCScanFlashLightView, ACCScanQRCodeMaskView, NSString, UIButton;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCRecordScanModelFlowService, ACCRecordUIHiddenStrategyService;

@interface ACCRecordQRCodeModeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCCameraScanEvent, ACCRecordScanModelFlowSubscriber>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordScanModelFlowService> scanFlowService;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (nonatomic) unsigned long long scanResultJump;
@property (nonatomic) BOOL appeared;
@property (retain, nonatomic) ACCCameraScanQRCodePerformanceTimestamp *scanQRCodePerformanceTimestamp;
@property (retain, nonatomic) UIButton *bubbleView;
@property (retain, nonatomic) ACCScanQRCodeMaskView *bgMaskView;
@property (retain, nonatomic) ACCScanFlashLightView *bottomFlashLightView;
@property (retain, nonatomic) ACCScanFlashLightView *toolbarFlashLightView;
@property (nonatomic) BOOL stableChanged;
@property (nonatomic) BOOL flashLightChanged;
@property (nonatomic) BOOL recordHandlerCloseTorch;
@property (nonatomic) BOOL currentFlashLightIsOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)appEnterBackground;
- (void)bindServices:(id)a0;
- (struct CGPoint { double x0; double x1; })centerRelativePositionWithParam:(id)a0;
- (void)flowServiceDidExitScanMode;
- (void)flowServiceStableChanged:(BOOL)a0;
- (void)onReceivedCameraScanQRCodeResults:(id)a0;
- (void)onReceivedCameraScanQRCodeResult:(id)a0;
- (void)onReceivedCameraBrightnessOpenFlashlightResult:(BOOL)a0;
- (void)hideQRCodeUI;
- (void)openFlashlight:(BOOL)a0;
- (void)resetAllRecordStatus;
- (id)recordScanModelFlowServiceImpl;
- (BOOL)enableUpdateScanFamilyMode;
- (void)sendScanCameraQRCodeMonitorTrackWithMultiCode:(BOOL)a0;
- (void)exitRecordPageWithType:(id)a0 isQrCode:(BOOL)a1;
- (id)getResultWithJumpUrl:(id)a0 resultList:(id)a1;
- (void)loadBubbleViewLoadingAnimation;
- (BOOL)shouldFixQRCodeSwitch;
- (void)loadQRCodeUI;
- (void)trackFlashLightBtnClick:(BOOL)a0;
- (void)openAllQRCodeAlgorithm;
- (void)closeAllQRCodeAlgorithm;
- (void)updateRecordButtonHidden:(BOOL)a0;
- (void)clickPermanentFlashLight;
- (void)alertImageNoQRCode;
- (id)qrcodeBottomHint;
- (id)shakeBottomHint;
- (void)resignActvie;
- (void)clickUnpermanentFlashLight;
- (void).cxx_destruct;
- (void)dealloc;
- (id)closeButton;

@end
