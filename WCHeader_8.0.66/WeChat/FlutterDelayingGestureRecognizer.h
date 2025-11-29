@class FlutterTouchInterceptingView, NSString, UIGestureRecognizer;

@interface FlutterDelayingGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL shouldEndInNextTouchesEnded;
@property (nonatomic) BOOL touchedEndedWithoutBlocking;
@property (retain, nonatomic) UIGestureRecognizer *forwardingRecognizer;
@property (nonatomic) FlutterTouchInterceptingView *interceptingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTarget:(id)a0 action:(SEL)a1 forwardingRecognizer:(id)a2;
- (BOOL)isInsidePlatformView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
