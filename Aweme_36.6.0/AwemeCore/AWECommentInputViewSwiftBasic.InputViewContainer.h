@interface AWECommentInputViewSwiftBasic.InputViewContainer : UIView {
    void /* unknown type, empty encoding */ keyboardContainerHeightConstraint;
    void /* unknown type, empty encoding */ contentHeightConstraint;
    void /* unknown type, empty encoding */ keyboardContainerBottomOffsetConstraint;
    void /* unknown type, empty encoding */ bgActionView;
    void /* unknown type, empty encoding */ bgMaskView;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ isShowAnimating;
    void /* unknown type, empty encoding */ isHorizontalScreen;
    void /* unknown type, empty encoding */ didInit;
    void /* unknown type, empty encoding */ containerWidth;
    void /* unknown type, empty encoding */ inputViewkeyboardContainer;
    void /* unknown type, empty encoding */ delegate;
}

- (void)panGestureWithGes:(id)a0;
- (void)dismissKeyboardWithGes:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
