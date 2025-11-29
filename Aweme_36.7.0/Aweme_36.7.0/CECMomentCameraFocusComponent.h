@class UITapGestureRecognizer, CECMomentCameraFlipViewModel, UIImageView, NSString, CAKeyframeAnimation, UIView, CECMomentCameraFocusViewModel;
@protocol CECMomentCameraFlowService;

@interface CECMomentCameraFocusComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImageView *focusImageView;
@property (retain, nonatomic) CAKeyframeAnimation *fadeOutAnimation;
@property (retain, nonatomic) CECMomentCameraFocusViewModel *viewModel;
@property (retain, nonatomic) CECMomentCameraFlipViewModel *flipViewModel;
@property (weak, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) UIView *secondPreview;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)componentDidLoad;
- (void)componentDidLayoutSubviews;
- (void)tapFocus:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handleDoubleTapGesture:(id)a0;

@end
