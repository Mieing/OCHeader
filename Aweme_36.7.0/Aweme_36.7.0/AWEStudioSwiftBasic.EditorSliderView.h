@interface AWEStudioSwiftBasic.EditorSliderView : UIView {
    void /* unknown type, empty encoding */ sliderValueChanged;
    void /* unknown type, empty encoding */ numberStatusChanged;
    void /* unknown type, empty encoding */ touchEndValueChanged;
    void /* unknown type, empty encoding */ currentValue;
    void /* unknown type, empty encoding */ minValue;
    void /* unknown type, empty encoding */ maxValue;
    void /* unknown type, empty encoding */ defaultNumber;
    void /* unknown type, empty encoding */ defaultValueText;
    void /* unknown type, empty encoding */ showTextValue;
    void /* unknown type, empty encoding */ cursorInset;
    void /* unknown type, empty encoding */ defaultConstraint;
    void /* unknown type, empty encoding */ cursorConstraint;
    void /* unknown type, empty encoding */ enableImpactFeedBack;
    void /* unknown type, empty encoding */ dismissMathLabelWhenTouchEnd;
    void /* unknown type, empty encoding */ touchBeginValue;
    void /* unknown type, empty encoding */ prevValue;
    void /* unknown type, empty encoding */ mathLabelBottomConstraint;
    void /* unknown type, empty encoding */ lineBgHeightConstraint;
    void /* unknown type, empty encoding */ defaultViewHeightConstraint;
    void /* unknown type, empty encoding */ impactFeedBack;
    void /* unknown type, empty encoding */ defaultView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ cursorView;
    void /* unknown type, empty encoding */ cursorTip;
    void /* unknown type, empty encoding */ mathLabel;
    void /* unknown type, empty encoding */ lineBg;
    void /* unknown type, empty encoding */ lineLayer;
}

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
