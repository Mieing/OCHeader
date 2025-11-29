@class IESECGoodsPriceLabel;

@interface IESECShopGoodsPriceComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;

+ (id /* block */)priceWithPriceWidth:(double)a0 height:(double)a1 priceColor:(id)a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 showSuffix:(BOOL)a4;
+ (double)priceWidthWithModel:(id)a0 showSuffix:(BOOL)a1;
+ (void)updatePriceLabel:(id)a0 withModel:(id)a1;
+ (double)priceNewWidthWithModel:(id)a0 integerFontSize:(double)a1 decimalFontSize:(double)a2 prefixFontSize:(double)a3 suffixFontSize:(double)a4 tagFontSize:(double)a5 showSuffix:(BOOL)a6 calculateLabel:(id)a7;
+ (id /* block */)priceWithPriceWidth:(double)a0;
+ (id /* block */)priceWithPriceWidth:(double)a0 priceHeight:(double)a1 priceColor:(id)a2 integerFontSize:(double)a3 iphone5AlikeIntergerFontSize:(double)a4 decimalFontSize:(double)a5 prefixFont:(id)a6 suffixFontSize:(double)a7 tagFontSize:(double)a8 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a9 showSuffix:(BOOL)a10;
+ (id /* block */)priceNewWithPriceWidth:(double)a0 Priceheight:(double)a1 integerFontSize:(double)a2 decimalFontSize:(double)a3 prefixFontSize:(double)a4 suffixFontSize:(double)a5 tagFontSize:(double)a6 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a7 showSuffix:(BOOL)a8;
+ (id /* block */)priceBuilderWithSize:(struct CGSize { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 color:(id)a2 tagFont:(id)a3 integerFont:(id)a4 decimalFont:(id)a5 suffixFont:(id)a6;
+ (double)priceWidthWithModel:(id)a0 integerFontSize:(double)a1 iphone5AlikeIntergerFontSize:(double)a2 decimalFontSize:(double)a3 prefixFontSize:(double)a4 suffixFontSize:(double)a5 tagFontSize:(double)a6 showSuffix:(BOOL)a7;
+ (double)priceNewWidthWithModel:(id)a0 integerFontSize:(double)a1 decimalFontSize:(double)a2 prefixFontSize:(double)a3 suffixFontSize:(double)a4 tagFontSize:(double)a5 showSuffix:(BOOL)a6;
+ (double)priceWidthWithModel:(id)a0 height:(double)a1 tagFont:(id)a2 integerFont:(id)a3 decimalFont:(id)a4 suffixFont:(id)a5 calculateLabel:(id)a6;
+ (id /* block */)price;

- (void)updateUIWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
