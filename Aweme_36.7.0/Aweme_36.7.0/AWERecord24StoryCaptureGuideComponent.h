@class AWERecord24StoryCaptureGuideView, AWERecord24StoryCaptureGuideViewModel, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCRecordAuthService;

@interface AWERecord24StoryCaptureGuideComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) AWERecord24StoryCaptureGuideViewModel *viewModel;
@property (retain, nonatomic) AWERecord24StoryCaptureGuideView *guideView;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecordAuthService> authService;
@property (nonatomic) BOOL isGuideViewShowing;
@property (nonatomic) BOOL isFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)dismissGuideView;
- (void)showGuideView;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
