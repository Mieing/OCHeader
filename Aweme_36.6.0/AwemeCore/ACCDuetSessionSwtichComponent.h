@class NSString, UIImageView, ACCDuetSessionSwtichServiceImpl, UIButton;
@protocol ACCRecordSwitchModeService, ACCRecordFrameRatioService, ACCDuetLayoutService, ACCRecorderViewContainer, ACCRecorderDuetProtocol, ACCSideslipPropPanelService, AWERecordBeautyService, ACCRecordSidebarService, ACCRecordFlowService, ACCCameraService, ACCSpeedControlService;

@interface ACCDuetSessionSwtichComponent : ACCFeatureComponent <ACCDuetSessionSwtichServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCSpeedControlServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCDuetDuetLayoutActionServiceSubscriber>

@property (retain, nonatomic) ACCDuetSessionSwtichServiceImpl *duetSessionSwtichService;
@property (retain, nonatomic) UIButton *cancelDuetButton;
@property (weak, nonatomic) UIImageView *lastFrameImageView;
@property (nonatomic) BOOL shouldRemoveCaptureViewMoreThanOneSecond;
@property (nonatomic) BOOL isLastFrameCaptureViewShowing;
@property (copy, nonatomic) id /* block */ autoDismissTask;
@property (retain, nonatomic) id<ACCRecorderDuetProtocol> duetservice;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (retain, nonatomic) id<ACCSpeedControlService> speedControlService;
@property (retain, nonatomic) id<AWERecordBeautyService> beautyService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> recordSwitchModeService;
@property (retain, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (retain, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCDuetLayoutService> duetLayoutService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceWillCancelRecord;
- (void)sideslipPropPanelService:(id)a0 willShowTrayView:(id)a1;
- (void)sideslipPropPanelService:(id)a0 willDismissTrayView:(id)a1;
- (BOOL)isDuetMode;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)didSwitchToDuetMode;
- (void)finishSwitchToDuetMode;
- (void)didSwitchToNormalMode;
- (void)finishSwitchToNormalMode;
- (void)addLastCaptureFrameIfNeeded;
- (id)duetCommonTrackDic;
- (void)handleClickDuetLayoutButtonFromNormalMode;
- (void)didTapOnSwitchButton:(id)a0;
- (id)duetLayoutBarItemView;
- (void)removeCaptureViewLastFrame;
- (void)tryRemoveCaptureViewLastFrame;
- (void)cancelAutoDismissTask;
- (void)p_removeLastFrameView;
- (void)trackClickEnterDuetEvent;
- (void)showCaptureViewLastFrame;
- (void)updateCancelDuetButtonVisibility;
- (void)updateDuetBarItemEnable;
- (id)configDuetHotSwitchTipWithTargetView:(id)a0;
- (void)trackDuetToastShowEvent;
- (void)trackClickCancelDuetEvent;
- (void)showSpeedControl:(BOOL)a0;
- (void).cxx_destruct;

@end
