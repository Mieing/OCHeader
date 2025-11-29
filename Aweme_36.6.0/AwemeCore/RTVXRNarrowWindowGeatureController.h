@class NSString, UIPinchGestureRecognizer, UIView, UIPanGestureRecognizer;
@protocol RTVXRNarrowWindowGeatureControllerDelegate;

@interface RTVXRNarrowWindowGeatureController : NSObject <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UIPanGestureRecognizer *panGesture;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<RTVXRNarrowWindowGeatureControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__handlePanGesture:(id)a0;
- (void)renderContainerView:(id)a0;
- (void)updateGestureType:(long long)a0 enabled:(BOOL)a1;
- (void)cancelInteractiveGesture;
- (void)__handlePinchGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
