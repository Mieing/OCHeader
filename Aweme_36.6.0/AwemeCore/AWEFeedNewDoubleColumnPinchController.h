@class NSString, UIPinchGestureRecognizer;

@interface AWEFeedNewDoubleColumnPinchController : AWEDCFeedBaseController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (nonatomic) BOOL alreadyHandlePinch;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preTrans;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerBeforeViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)handlePinchExit;
- (void).cxx_destruct;
- (void)containerViewWillLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)containerViewDidLayoutSubviews;
- (void)handlePinchGesture:(id)a0;
- (void)containerViewDidLoad;

@end
