@class UIButton, UILabel, NSString;
@protocol ACCLandscapeRecordService, ACCPropPickerService, ACCSideslipPropService, ACCRecorderViewContainer, ACCCameraService, ACCRecordSwitchModeService, ACCRecordUIHiddenStrategyService;

@interface ACCSideslipPropExitComponent : ACCFeatureComponent <ACCSideslipPropServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCLandscapeRecordServiceSubscriber>

@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) UILabel *exitLabel;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCPropPickerService> propPickerService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCLandscapeRecordService> landscapeRecordService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)recorderDeviceOrientationChanged:(long long)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)sideslipPropService:(id)a0 willChangeShowState:(unsigned long long)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)bindServices:(id)a0;
- (void)p_updateExitBtnShowIfNeed:(BOOL)a0;
- (void)p_handleExitTrackWithMethod:(id)a0;
- (void)onExitBtnClick:(id)a0;
- (void).cxx_destruct;

@end
