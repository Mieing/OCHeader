@class NSString, AFDMomentDropDownAnimator, UIPercentDrivenInteractiveTransition, UIPanGestureRecognizer;
@protocol AFDMomentDetailCameraInterface;

@interface AFDMomentDetailPullDownComponent : AFDMomentDetailBaseComponent <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AFDMomentDropDownAnimator *animator;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveAnimator;
@property (readonly, nonatomic) double pullDownThreshold;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL isInTransition;
@property (weak, nonatomic) id<AFDMomentDetailCameraInterface> cameraComponent;
@property (nonatomic) unsigned long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)interactionControllerForDismissal:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
