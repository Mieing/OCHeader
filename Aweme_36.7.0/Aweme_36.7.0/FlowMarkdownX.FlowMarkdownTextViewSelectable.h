@interface FlowMarkdownX.FlowMarkdownTextViewSelectable : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ selectColor;
    void /* unknown type, empty encoding */ handlerTintColor;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ overlayer;
    void /* unknown type, empty encoding */ interactView;
    void /* unknown type, empty encoding */ textViewDrawSelectUseContextRender;
    void /* unknown type, empty encoding */ selectState;
    void /* unknown type, empty encoding */ magnifierView;
    void /* unknown type, empty encoding */ needReset;
    void /* unknown type, empty encoding */ selectRange;
    void /* unknown type, empty encoding */ tapOutSideGesture;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleTap:(id)a0;

@end
