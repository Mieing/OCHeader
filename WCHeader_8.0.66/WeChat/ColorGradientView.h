@class CAGradientLayer;

@interface ColorGradientView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 alphaTop:(double)a2 alphaBottom:(double)a3;
- (void)configureWithColor:(id)a0 alphaTop:(double)a1 alphaBottom:(double)a2;
- (void)configureWithLocationTop:(double)a0 locationBottom:(double)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3;
- (unsigned long long)countOfSubLayers;
- (void)commonConfiWithColor:(id)a0 alphaTop:(double)a1 alphaBottom:(double)a2;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
