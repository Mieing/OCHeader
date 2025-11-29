@interface FlowUIKit.MeterView : UIView {
    void /* unknown type, empty encoding */ meters;
    void /* unknown type, empty encoding */ metersAlpha;
    void /* unknown type, empty encoding */ ignoreAlpha;
    void /* unknown type, empty encoding */ meterCount;
    void /* unknown type, empty encoding */ meterColors;
    void /* unknown type, empty encoding */ meterWidth;
    void /* unknown type, empty encoding */ meterHeight;
    void /* unknown type, empty encoding */ meterPadding;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
