@class ACCMicrophoneViewModel, NSString, AWEReactMicrophoneButton;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordAuthService, ACCRecordSystemLivePhotoService, ACCRecordSidebarService, ACCDuetSessionSwtichService, ACCRecordFlowService, ACCCameraService, AWERecordAuthService;

@interface ACCMicrophoneComponent : ACCFeatureComponent <ACCRecordConfigAudioHandler, ACCRecordConfigDurationHandler, ACCRecordSwitchModeServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordPropServiceSubscriber, ACCRecordFlowControlServiceSubscriber, ACCDuetSessionSwtichServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordAuthService> authService;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) id<AWERecordAuthService> recordAuthService;
@property (retain, nonatomic) AWEReactMicrophoneButton *reactMicButton;
@property (retain, nonatomic) ACCMicrophoneViewModel *viewModel;
@property (nonatomic) BOOL viewDidAppearOnce;
@property (nonatomic) BOOL hasAppearMusicToast;
@property (copy, nonatomic) NSString *expectedDuetMicrophoneShowTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)propServiceWillDeselectProp:(id)a0;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)didSetMaxDuration:(double)a0;
- (void)willSwitchToDuetMode;
- (void)didFinishConfigAudioWithSetMusicCompletion:(id /* block */)a0;
- (void)createMicrophoneBarItem;
- (void)updateMicroBarUIAlpha;
- (void)updateVideoMutedStatusAfterAuth;
- (void)p_setupDuetMicrophoneStatusTipIfNeed;
- (void)p_showDuetMicrophoneTipIfNeed;
- (BOOL)microphoneBarItemNeedShow;
- (BOOL)haveDeniedMicroPhone;
- (void)updateMicrophoneStatus:(BOOL)a0;
- (void)toggleMicButton;
- (void)updateMicLockState;
- (void)updateMicroItemWithDuration:(double)a0;
- (void)clickReactMicButton:(id)a0;
- (void).cxx_destruct;

@end
