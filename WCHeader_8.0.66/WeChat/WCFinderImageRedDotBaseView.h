@class MMUIButton;

@interface WCFinderImageRedDotBaseView : MMUIView

@property (retain, nonatomic) MMUIButton *imageBtn;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 btnBkgColor:(id)a1 isCircular:(BOOL)a2 expandHitHeight:(double)a3 expandHitWidth:(double)a4 accessibilityLabel:(id)a5;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (BOOL)addBlurEffectWithColor:(id)a0;
- (void).cxx_destruct;

@end
