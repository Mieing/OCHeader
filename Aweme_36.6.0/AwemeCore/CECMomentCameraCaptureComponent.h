@class NSString, CECMomentCameraCaptureViewModel, UIView, UIButton;
@protocol CECMomentCameraSubModeService;

@interface CECMomentCameraCaptureComponent : AFDMomentCameraBaseComponent <CECMomentCameraSubModeSwitchServiceSubscriber>

@property (retain, nonatomic) CECMomentCameraCaptureViewModel *viewModel;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (retain, nonatomic) UIView *captureContainerView;
@property (retain, nonatomic) UIView *captureRingView;
@property (retain, nonatomic) UIButton *captureButtonView;
@property (nonatomic) BOOL captureButtonHiddenState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)subModeServiceWillChangeToMode:(id)a0 fromMode:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;

@end
