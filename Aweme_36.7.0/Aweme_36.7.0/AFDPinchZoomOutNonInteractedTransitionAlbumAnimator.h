@class NSString, UIViewController, UIView;
@protocol AFDPureModePageViewControllerProtocol;

@interface AFDPinchZoomOutNonInteractedTransitionAlbumAnimator : NSObject <AFDPinchZoomOutNonInteractedTransitionAnimatorProtocol>

@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController<AFDPureModePageViewControllerProtocol> *pureModeVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playTransitionAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
