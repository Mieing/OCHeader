@class FlutterDelayingGestureRecognizer, UIView;

@interface FlutterTouchInterceptingView : UIView

@property (readonly, weak, nonatomic) UIView *embeddedView;
@property (readonly, nonatomic) FlutterDelayingGestureRecognizer *delayingRecognizer;
@property (readonly, nonatomic) int blockingPolicy;
@property (retain, nonatomic) id flutterAccessibilityContainer;

- (id)initWithEmbeddedView:(id)a0 platformViewsController:(id)a1 gestureRecognizersBlockingPolicy:(int)a2;
- (void)forceResetForwardingGestureRecognizerState;
- (void)releaseGesture;
- (BOOL)containsWebView:(id)a0 remainingSubviewDepth:(int)a1;
- (void)blockGesture;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)accessibilityContainer;
- (void).cxx_destruct;

@end
