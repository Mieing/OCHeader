@class UIImageView, AFDMomentCameraFocusViewModel, CAKeyframeAnimation, UITapGestureRecognizer;

@interface AFDMomentCameraFocusComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) UIImageView *focusImageView;
@property (retain, nonatomic) CAKeyframeAnimation *fadeOutAnimation;
@property (retain, nonatomic) AFDMomentCameraFocusViewModel *viewModel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)componentDidLayoutSubviews;
- (void)tapFocus:(id)a0;
- (void).cxx_destruct;

@end
