@class UIColor, CAGradientLayer;

@interface WCFinderSearchDecorationView : UICollectionReusableView

@property (retain, nonatomic) UIColor *beginColor;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSearchMaskUI;
- (void)applyLayoutAttributes:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
