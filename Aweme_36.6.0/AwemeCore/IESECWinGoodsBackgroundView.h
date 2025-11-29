@class CAGradientLayer, UIView;

@interface IESECWinGoodsBackgroundView : UIView {
    UIView *_contentView;
}

@property (retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
@property (nonatomic) double topInset;
@property (nonatomic) double contentOffsetY;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configureSubviews;

@end
