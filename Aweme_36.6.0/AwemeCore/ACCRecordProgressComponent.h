@class UILabel, NSString, UIView;
@protocol ACCRecorderViewContainer, AWERecordFlowSourceService, ACCRecordUIHiddenStrategyService, ACCCameraService, ACCRecordFlowService, ACCRecordAuthService, AWEStudioBusinessCameraFlowControlProtocol, ACCRecordPropService, ACCRecordFlowControlService, ACCSideslipPropService, ACCSideslipPropPanelService, ACCRecordFlowConfigProtocol, ACCRecordSwitchModeService, AWEVideoProgressViewProtocol, ACCVideoConfigProtocol, ACCRecordSystemLivePhotoService;

@interface ACCRecordProgressComponent : ACCFeatureComponent <ACCRecordTimeLabelService, ACCRecordFlowServiceSubscriber, ACCRecordConfigDurationHandler, ACCCameraLifeCircleEvent, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCSideslipPropPanelServiceSubscriber>

@property (retain, nonatomic) UIView<AWEVideoProgressViewProtocol> *studioProgressView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } studioProgressViewFrame;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordFlowConfigProtocol> flowConfig;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraServiceFlowContext;
@property (retain, nonatomic) id<AWERecordFlowSourceService> flowSourceService;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) NSString *timeLimitInfo;
@property (nonatomic) BOOL isShowTimeLimitInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)cameraService:(id)a0 pauseRecordWithError:(id)a1;
- (void)cameraService:(id)a0 startRecordWithError:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)flowServiceDidMarkDuration:(double)a0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceDurationHasRestored;
- (void)viewContainerDidLayout;
- (void)sideslipPropPanelService:(id)a0 willShowTrayView:(id)a1;
- (void)sideslipPropPanelService:(id)a0 willDismissTrayView:(id)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (BOOL)isTimeLabelEnabled;
- (void)updateStandardDurationIndicatorDisplay;
- (void)updateProgressAndMarksDisplay;
- (void)didSetMaxDuration:(double)a0;
- (void)hideProgressBar:(BOOL)a0;
- (void)updateBlinkingMark;
- (void)hideTimeLabelIfNeed;
- (void)blinkBarIfCompleted;
- (void)updateTimeLimitInfo;
- (BOOL)shouldShowTimeLimitInfo;
- (void)updateDurationDisplay;
- (BOOL)p_shouldDisableTimeLabel;
- (id)currentDurationText;
- (void).cxx_destruct;
- (void)updateProgressBar;

@end
