@class ACCScreenSimulatedTorchView, AWEFlashModeSwitchButton, NSString;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCRecordSwitchModeService, ACCRecordTrackService, ACCRecordPropService, ACCRecordSidebarService;

@interface ACCFlashComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent, ACCRecordSwitchModeServiceSubscriber, ACCRecordPropServiceSubscriber, ACCRecorderEvent>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL shouldShowTorchButton;
@property (retain, nonatomic) AWEFlashModeSwitchButton *flashSwitchButton;
@property (retain, nonatomic) ACCScreenSimulatedTorchView *frontCameraTorch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)onWillSwitchToColorSpace:(unsigned long long)a0;
- (void)onWillStartVideoRecordWithRate:(double)a0;
- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)cameraService:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)p_handleTorchModeOnStartWithBlock:(id /* block */)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)p_bindViewModelObserver;
- (void)configFlashBarItem;
- (void)updateTorchSwitchButtonStateForCameraChange;
- (void)syncViewStateWithViewModel;
- (void)p_updateFlashButtonsEnableStateForModeSwitch;
- (void)clickTorchSwitchBtn:(id)a0;
- (unsigned long long)nextOnOrOffFlashMode;
- (void).cxx_destruct;

@end
