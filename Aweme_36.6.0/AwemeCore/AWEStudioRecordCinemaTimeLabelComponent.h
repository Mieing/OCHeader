@class NSString, AWEStudioCustomFontLabel;
@protocol ACCRecordSwitchModeService, ACCRecordFlowControlService, ACCRecordPropService, ACCRecorderViewContainer, AWEStudioBusinessCameraFlowControlProtocol, ACCRecordAuthService, ACCSideslipPropService, ACCRecordSubmodeService, ACCRecordFlowService, ACCCameraService, ACCRecordFrameRatioService;

@interface AWEStudioRecordCinemaTimeLabelComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecordFlowControlServiceSubscriber, ACCRecordFrameRatioServiceSubscriber>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecordSubmodeService> submodeService;
@property (weak, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraServiceFlowContext;
@property (weak, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) AWEStudioCustomFontLabel *timeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)cameraService:(id)a0 pauseRecordWithError:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)flowServiceDidMarkDuration:(double)a0;
- (void)viewContainerDidLayout;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)recordFrameRatioWillSwitchTo:(long long)a0;
- (void)hideTimeLabelIfNeeded;
- (void)updateTimeLabelText;
- (void)updateTimeLabelFrame;
- (void).cxx_destruct;

@end
