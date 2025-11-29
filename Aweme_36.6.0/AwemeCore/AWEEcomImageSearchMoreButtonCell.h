@class CAGradientLayer, UIImageView, NSDictionary, UILabel;

@interface AWEEcomImageSearchMoreButtonCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) CAGradientLayer *effectGradientLayer;
@property (copy, nonatomic) NSDictionary *searchParams;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)trackCardClick;
- (void)setSearchInfoDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)willDisplay;

@end
