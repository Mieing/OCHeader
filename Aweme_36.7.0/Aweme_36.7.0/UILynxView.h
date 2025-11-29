@class NSString, UIPanGestureRecognizer;

@interface UILynxView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *nativeGesturePanRecognizer;
@property (nonatomic) long long interceptGestureStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupNativeGestureRecognizerIfNeeded;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handlePanGesture:(id)a0;

@end
