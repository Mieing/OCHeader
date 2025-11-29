@class UIFont;

@interface AWEECCustomPriceLabel : UILabel

@property (retain, nonatomic) UIFont *priceTagFont;
@property (retain, nonatomic) UIFont *priceIntegerFont;
@property (retain, nonatomic) UIFont *priceDecimalFont;
@property (retain, nonatomic) UIFont *priceSuffixFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;
@property (nonatomic) long long minimumFractionDigits;

- (void)updatePriceWithCentPrice:(id)a0;
- (void)updatePriceWithCentPrice:(id)a0 withSuffix:(id)a1;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
