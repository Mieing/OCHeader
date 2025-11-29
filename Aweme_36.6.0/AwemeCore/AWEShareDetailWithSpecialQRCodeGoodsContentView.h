@class UIFont, UIImageView, UIView, UILabel;

@interface AWEShareDetailWithSpecialQRCodeGoodsContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UIFont *priceTagFont;
@property (retain, nonatomic) UIFont *priceIntegerFont;
@property (retain, nonatomic) UIFont *priceDecimalFont;
@property (retain, nonatomic) UILabel *priceLabel;

- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
