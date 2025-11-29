@class UILabel, UIImageView;

@interface AWEEcomSearchPriceAreaView : UIView

@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIImageView *backgroundImageView;

+ (double)priceAreaHeight;

- (void)configWithMerchandise:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
