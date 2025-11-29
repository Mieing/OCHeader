@interface AWEStudioRecordImpl.InsPanelFilterContainerView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ width;
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ filterView;
    void /* unknown type, empty encoding */ backspaceActionCallback;
}

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)backspaceAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
