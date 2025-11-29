@class CAGradientLayer;

@interface MMLiveGradientView : UIView {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    struct { double x1; double y1; double x2; double y2; double offset[3]; double reds[3]; double greens[3]; double blues[3]; double alphas[3]; } _gradient;
    struct { double x1; double y1; double x2; double y2; double offset[3]; double reds[3]; double greens[3]; double blues[3]; double alphas[3]; } _lgradient;
    BOOL _reverse;
    BOOL _changed;
}

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL isLandscape;

+ (id)topShadowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)bottomShadowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)topShadowHeight:(BOOL)a0;
+ (double)bottomShadowHeight:(BOOL)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 gradient:(struct { double x0; double x1; double x2; double x3; double x4[3]; double x5[3]; double x6[3]; double x7[3]; double x8[3]; })a1 lGradient:(struct { double x0; double x1; double x2; double x3; double x4[3]; double x5[3]; double x6[3]; double x7[3]; double x8[3]; })a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 reverse:(BOOL)a4;
- (void)setup;
- (void)doChange;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
