@interface FlowKitBizUI.MessageTextView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate> {
    void /* unknown type, empty encoding */ underLineRange;
    void /* unknown type, empty encoding */ doubleTapGesture;
    void /* unknown type, empty encoding */ doubleClickPosition;
    void /* unknown type, empty encoding */ clickFrom;
    void /* unknown type, empty encoding */ shouldDrawDidChangeBlock;
    void /* unknown type, empty encoding */ shouldShowCustomMenu;
    void /* unknown type, empty encoding */ textSelectedBlock;
    void /* unknown type, empty encoding */ shouldDrawUnderline;
    void /* unknown type, empty encoding */ selectable;
    void /* unknown type, empty encoding */ selectRange;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ lineFragmentRects;
    void /* unknown type, empty encoding */ textCopyAction;
    void /* unknown type, empty encoding */ linkClickAction;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)doubleTapGestureClick:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textViewDidChangeSelection:(id)a0;

@end
