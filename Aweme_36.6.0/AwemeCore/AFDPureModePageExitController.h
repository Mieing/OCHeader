@interface AFDPureModePageExitController : AWEBaseController <AFDPureModePageControllerProtocol, UIGestureRecognizerDelegate>

- (void)exitPureMode;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)handlePanGesture:(id)a0;

@end
