@class NSString, UIImageView, NSTimer, CAKeyframeAnimation, ACCFocusViewModel, ACCExposureSlider;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCRecordFrameRatioService, ACCRecordPropService;

@interface ACCFocusComponent : ACCFeatureComponent <ACCRecordConfigAudioHandler, ACCCameraLifeCircleEvent, ACCCameraControlEvent, CAAnimationDelegate, ACCRecordSwitchModeServiceSubscriber, ACCRecordFrameRatioServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isOnFocusAndExposureAnimating;
@property (retain, nonatomic) ACCFocusViewModel *viewModel;
@property (retain, nonatomic) ACCExposureSlider *exposureSlider;
@property (retain, nonatomic) UIImageView *focusImageView;
@property (retain, nonatomic) NSTimer *exposureSliderHideTimer;
@property (retain, nonatomic) CAKeyframeAnimation *fadeOutAnimation;
@property (nonatomic) long long removeActionVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)onDidManuallyAdjustFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onDidManuallyAdjustFocusAndExposurePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onDidManuallyAdjustExposureBiasWithRatio:(float)a0 exposureRatio:(float)a1;
- (void)onWillSwitchToCameraPosition:(long long)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)recordFrameRatioWillSwitchTo:(long long)a0;
- (void)p_bindViewModels;
- (void)p_readExistData;
- (void)cancelExposureSliderHideTimer;
- (void)p_didSetEffectWithPack:(id)a0;
- (void)hideFocusAndExposureSlider;
- (void)cancelExposureSliderFadeOutAnimation;
- (void)startExposureSliderHideTimerWithVersion:(long long)a0;
- (void)willFocusAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willFocusAndExposureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startExposureSliderFadeOutAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
