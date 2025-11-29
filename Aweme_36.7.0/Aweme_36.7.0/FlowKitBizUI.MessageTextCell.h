@interface FlowKitBizUI.MessageTextCell : FlowKitBizUI.MessageCell <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ messageTextView;
    void /* unknown type, empty encoding */ referenceView;
    void /* unknown type, empty encoding */ textLayoutAnimation;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ quoteTapAction;
}

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)handleTap:(id)a0;

@end
