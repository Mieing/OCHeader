@interface FlowKit.WaveItem : UIView {
    void /* unknown type, empty encoding */ animationDuration;
    void /* unknown type, empty encoding */ scaleDuration;
    void /* unknown type, empty encoding */ animationControlPoints;
    void /* unknown type, empty encoding */ barWidth;
    void /* unknown type, empty encoding */ minHeight;
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ dummyLayer;
    void /* unknown type, empty encoding */ prevScale;
    void /* unknown type, empty encoding */ xPosition;
    void /* unknown type, empty encoding */ delay;
}

- (void)updateWaveItemFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
