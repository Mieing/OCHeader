@class AWEIMExchangeCameraPublishViewModel, UIButton;

@interface AWEIMExchangeCameraPublishComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) AWEIMExchangeCameraPublishViewModel *viewModel;
@property (retain, nonatomic) UIButton *publishButton;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;

@end
