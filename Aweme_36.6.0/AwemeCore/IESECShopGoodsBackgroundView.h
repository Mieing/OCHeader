@class CAGradientLayer, UIView;

@interface IESECShopGoodsBackgroundView : UIView {
    UIView *_contentView;
}

@property (retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
@property (nonatomic) double topInset;
@property (nonatomic) double contentOffsetY;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long backgroundType;

- (void)configureBackgroundWithType:(long long)a0;
- (void)configBackgroundGradient;
- (void)configBackgroundSolid;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configureSubviews;

@end
