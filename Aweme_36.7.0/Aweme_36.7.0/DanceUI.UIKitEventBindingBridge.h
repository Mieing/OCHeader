@interface DanceUI.UIKitEventBindingBridge : DanceUI.EventBindingBridge <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ gestureRecognizer;
    void /* unknown type, empty encoding */ actions;
}

- (void)flushActions;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
