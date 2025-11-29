@class NSString, UIViewController;

@interface AWETransitionFullScreenPinchGestureRecognizer : UIPinchGestureRecognizer <AWETransitionPinchGestureRecognizer>

@property (weak, nonatomic) UIViewController *associatedViewController;
@property (nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
