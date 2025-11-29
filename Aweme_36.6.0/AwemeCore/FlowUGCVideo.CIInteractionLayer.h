@interface FlowUGCVideo.CIInteractionLayer : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ baseModel;
    void /* unknown type, empty encoding */ footerView;
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ btns;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ saveButton;
    void /* unknown type, empty encoding */ playerVisibleRect;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navBackgroundView;
    void /* unknown type, empty encoding */ playGesture;
    void /* unknown type, empty encoding */ addCreationButton;
    void /* unknown type, empty encoding */ changeCreationButton;
}

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
