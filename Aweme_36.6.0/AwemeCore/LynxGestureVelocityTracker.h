@class NSString, UIPanGestureRecognizer;

@interface LynxGestureVelocityTracker : NSObject <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UIPanGestureRecognizer *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootView:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)update:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (void)dealloc;

@end
