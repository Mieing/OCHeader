@class NSString, MsgFullScreenInputPresentAnimator, MsgFullScreenInputDismissAnimator;

@interface MsgFullScreenInputAnimationController : NSObject <CAAnimationDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) MsgFullScreenInputPresentAnimator *presentAnimator;
@property (retain, nonatomic) MsgFullScreenInputDismissAnimator *dismissAnimator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } growTextViewOriginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textViewOriginFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void).cxx_destruct;

@end
