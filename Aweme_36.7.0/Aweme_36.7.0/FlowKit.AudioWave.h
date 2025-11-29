@interface FlowKit.AudioWave : UIView {
    void /* unknown type, empty encoding */ waveCount;
    void /* unknown type, empty encoding */ padding;
    void /* unknown type, empty encoding */ animationGap;
    void /* unknown type, empty encoding */ barWidth;
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ waveItems;
    void /* unknown type, empty encoding */ scaleFactorList;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
