@interface FlowProfileBizUI.CreationZoomInteractiveTransition : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ inProgress;
    void /* unknown type, empty encoding */ shouldComplete;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ animator;
    void /* unknown type, empty encoding */ panOffset;
    void /* unknown type, empty encoding */ initialTranslation;
    void /* unknown type, empty encoding */ context;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startInteractiveTransition:(id)a0;

@end
