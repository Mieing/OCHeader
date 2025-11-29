@class AWEZoomSelectButton, NSArray, ACCRecordMode, NSString;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, _TtP9CameraKit28CameraSessionManagerProtocol_, ACCRecorderViewContainer, ACCRecordUIHiddenStrategyService, AWEStudioRawTypePropServiceProtocol, ACCRecordSubmodeService, ACCSpeedControlService, ACCCameraControlProtocol, ACCRecordFrameRatioService;

@interface AWEZoomSelectComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver, ACCRecordFrameRatioServiceSubscriber, ACCRecordPropServiceSubscriber, ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) AWEZoomSelectButton *zoomSelectButton;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCCameraControlProtocol> cameraControl;
@property (weak, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (weak, nonatomic) id<ACCSpeedControlService> speedControlService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<AWEStudioRawTypePropServiceProtocol> rawTypePropService;
@property (weak, nonatomic) id<_TtP9CameraKit28CameraSessionManagerProtocol_> cameraSessionManager;
@property (nonatomic) double backZoomFactor;
@property (copy, nonatomic) NSArray *scaleFactorArray;
@property (copy, nonatomic) NSArray *normalScaleFactorArray;
@property (copy, nonatomic) NSArray *rawTypePropScaleFactorArray;
@property (nonatomic) long long currentScaleIndex;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (weak, nonatomic) id<ACCRecordSubmodeService> submodeService;
@property (nonatomic) long long lastFrameRatio;
@property (retain, nonatomic) ACCRecordMode *lastRecordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)viewContainerDidLayout;
- (BOOL)shouldHideButton;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)bindServices:(id)a0;
- (void)recordFrameRatioWillSwitchTo:(long long)a0;
- (long long)frameRationTypeFromFeatureRation:(unsigned long long)a0;
- (void)updateButtonHiddenWithAnimated:(BOOL)a0;
- (void)p_switchZoomFactorForRawTypeProp;
- (long long)p_getNextScaleIndex;
- (double)getScaleWithIndex:(long long)a0;
- (void)trackZoomSelectWithZoomValue:(double)a0;
- (void)p_setButtonTitleWithFactor:(double)a0;
- (void)p_switchZoomFactor;
- (void)updateCurrentScaleIndexWithZoomFactor:(double)a0;
- (void)p_fadeShow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonFrameAboveSubmodeWithFrameRatioType:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonFrameWithFrameRatioType:(long long)a0;
- (double)buttonYWithFrameRationType:(long long)a0 fixed:(BOOL *)a1;
- (double)zoomButtonHeight;
- (double)p_submodeTopY;
- (void)p_updateZoomButtonBackgroundView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonFrameWithFrameRatioType:(long long)a0 mode:(id)a1;
- (void)resetToStandardZoomFactor;
- (void).cxx_destruct;
- (double)buttonX;

@end
