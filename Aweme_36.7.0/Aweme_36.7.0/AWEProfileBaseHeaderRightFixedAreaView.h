@class NSArray, CAGradientLayer, UIView;

@interface AWEProfileBaseHeaderRightFixedAreaView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *leftGradientView;
@property (copy, nonatomic) NSArray *displayingViewArray;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double viewWidth;

- (void)reloadRightFixedAreaWithViewsArray:(id)a0;
- (void)clearAllElements;
- (double)heightWithCGFloatNormalValue:(double)a0 middleValue:(double)a1 largeValue:(double)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
