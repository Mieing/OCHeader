@class NSArray, NSString, CECMomentCameraFlipViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraService, CECMomentCameraSwitchTabService;

@interface CECMomentCameraScaleViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber, CECMomentCameraLifeCircleEvent>

@property (nonatomic) double backScaleFactor;
@property (nonatomic) double fontScaleFactor;
@property (nonatomic) BOOL scaleFactorHidden;
@property (nonatomic) BOOL userInteractionEnabled;
@property (readonly, weak, nonatomic) CECMomentCameraFlipViewModel *flipViewModel;
@property (copy, nonatomic) NSArray *scaleFactorArray;
@property (nonatomic) long long defaultScaleIndex;
@property (nonatomic) long long currentScaleIndex;
@property (nonatomic) BOOL isEqualToOrOlderThanIphone11;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)p_updateWithState:(long long)a0;
- (void)resetScale;
- (void)showScaleButtonIfCould;
- (void)hideScaleButton;
- (void)switchScaleFactor;
- (double)getNextScale;
- (void)resetScaleForFakeDoubleCapture;
- (void).cxx_destruct;

@end
