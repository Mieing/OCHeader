@interface FlowKitBizUI.FlowRecordButton : UIButton {
    void /* unknown type, empty encoding */ buttonColor;
    void /* unknown type, empty encoding */ progressColor;
    void /* unknown type, empty encoding */ circleLength;
    void /* unknown type, empty encoding */ circleBorderWidth;
    void /* unknown type, empty encoding */ circleScaleRatio;
    void /* unknown type, empty encoding */ circleBorderScaleRatio;
    void /* unknown type, empty encoding */ closeWhenFinished;
    void /* unknown type, empty encoding */ didTouchDownBlock;
    void /* unknown type, empty encoding */ didTouchUpBlock;
    void /* unknown type, empty encoding */ buttonState;
    void /* unknown type, empty encoding */ circleLayer;
    void /* unknown type, empty encoding */ circleBorder;
    void /* unknown type, empty encoding */ progressLayer;
    void /* unknown type, empty encoding */ gradientMaskLayer;
    void /* unknown type, empty encoding */ currentProgress;
}

- (void)didTouchDown;
- (void)didTouchUp;
- (void)didTouchCancel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
