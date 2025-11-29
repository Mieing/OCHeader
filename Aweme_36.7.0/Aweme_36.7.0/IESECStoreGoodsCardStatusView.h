@class CAGradientLayer, UIImageView, UIView, UILabel;

@interface IESECStoreGoodsCardStatusView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *iconBackgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL useExternalImage;

- (void)setImageURLModel:(id)a0;
- (void)updateIconImageView;
- (void)setGifImageURLModel:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
