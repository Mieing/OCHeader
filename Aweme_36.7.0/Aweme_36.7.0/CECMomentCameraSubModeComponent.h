@class NSString, ACCRecordContainerMode, CECSwitchLengthView, CECMomentCameraSubModeViewModel;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, CECMomentCameraSubModeService;

@interface CECMomentCameraSubModeComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber, CECSwitchLengthViewDelegate>

@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (retain, nonatomic) CECMomentCameraSubModeViewModel *viewModel;
@property (weak, nonatomic) ACCRecordContainerMode *containerMode;
@property (retain, nonatomic) CECSwitchLengthView *switchLengthView;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponentView;
- (void)bindViewModel;
- (void)flowServiceWillChangeToState:(long long)a0 fromState:(long long)a1;
- (void)componentDidLoad;
- (void)componentWillAppear:(BOOL)a0;
- (void)modeIndexDidChangeTo:(long long)a0 method:(long long)a1;
- (void).cxx_destruct;

@end
