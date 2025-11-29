@interface AWECommentInteractionElementTouchGesture : UITapGestureRecognizer <UIGestureRecognizerDelegate, AWEInteractionElementTouchGestureProtocol> {
    void /* unknown type, empty encoding */ touchBegin;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)addTouchGesture:(id)a0 touchBeginBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
