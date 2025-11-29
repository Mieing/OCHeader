@class UIFont;

@interface IESECGoodsPriceLabel : UILabel

@property (retain, nonatomic) UIFont *pricePrefixFont;
@property (retain, nonatomic) UIFont *priceTagFont;
@property (retain, nonatomic) UIFont *priceIntegerFont;
@property (retain, nonatomic) UIFont *priceDecimalFont;
@property (retain, nonatomic) UIFont *priceSuffixFont;
@property (retain, nonatomic) UIFont *thresholdFont;
@property (nonatomic) BOOL showGapPriceTag;
@property (nonatomic) BOOL showMaxPrice;
@property (nonatomic) BOOL showComma;
@property (nonatomic) BOOL showSuffix;
@property (nonatomic) long long numberOfTagSpacing;
@property (nonatomic) long long numberOfSuffixSpacing;
@property (nonatomic) double spacingBetweenPriceAndSuffix;

+ (id)priceFormat:(id)a0;
+ (BOOL)canShowMaxPriceWithGoods:(id)a0;
+ (id)p_makeAttributedStringWithGoodsPrice:(id)a0 priceIntegerFont:(id)a1 priceTagFont:(id)a2 priceDecimalFont:(id)a3 showComma:(BOOL)a4 numberOfTagSpacing:(long long)a5;
+ (id)p_convertFenToYuan:(id)a0;
+ (id)spacingWithWidth:(long long)a0;
+ (id)p_addCommaToPriceString:(id)a0 showComma:(BOOL)a1;
+ (id)makeAttributesWithMinPrice:(id)a0 maxPrice:(id)a1 priceIntegerFont:(id)a2 priceTagFont:(id)a3 priceDecimalFont:(id)a4 priceSuffixFont:(id)a5 showMaxPrice:(BOOL)a6 showGapPriceTag:(BOOL)a7 showComma:(BOOL)a8 showSuffix:(BOOL)a9 suffix:(id)a10 numberOfTagSpacing:(long long)a11 numberOfSuffixSpacing:(long long)a12;
+ (id)makeAttributesWithPriceElement:(id)a0 showMaxPrice:(BOOL)a1 showSuffix:(BOOL)a2;
+ (id)updatePrice:(id)a0 suffix:(id)a1 suffixFont:(id)a2;
+ (double)calculateWidthWith:(id)a0 height:(double)a1 showMaxPrice:(BOOL)a2 showSuffix:(BOOL)a3;

- (void)updatePriceWithCentPrice:(id)a0;
- (void)updateMinPriceWithGoods:(id)a0;
- (void)updateGapPriceWithGoods:(id)a0 withPrefix:(id)a1;
- (void)updatePriceWithGoodsMinPrice:(id)a0 maxPrice:(id)a1;
- (void)updatePriceWithGoods:(id)a0;
- (void)updateDiscountPriceWithCentPrice:(id)a0;
- (BOOL)doesGoodsConformsToPriceProtocol:(id)a0;
- (void)updatePriceWithStringPrice:(id)a0;
- (void)updateShowMaxPriceWithGoods:(id)a0;
- (void)updateGapPriceWithGoods:(id)a0 withPrefix:(id)a1 withSuffixHandler:(id /* block */)a2;
- (void)updateGapPriceWithGoods:(id)a0;
- (void)updatePriceSuffix:(id)a0 withSuffixHandler:(id /* block */)a1;
- (void)updatePricePrefix:(id)a0;
- (id)p_makeAttributedPriceExtraInfo:(id)a0 isHeader:(BOOL)a1;
- (void)updateGapPriceWithGoods:(id)a0 withPrefix:(id)a1 withSuffix:(id)a2 withSuffixHandler:(id /* block */)a3;
- (void)updatePriceSuffix:(id)a0;
- (void)updatePriceWithGoodsPrice:(id)a0;
- (void)updateGapPriceWithPrice:(id)a0 withPrefix:(id)a1;
- (void)updateGapPriceWithGoods:(id)a0 withPrefix:(id)a1 withSuffix:(id)a2;
- (void)updateDiscountPriceWithCentPrice:(id)a0 withPrefix:(id)a1 withSuffix:(id)a2;
- (void)newUpdateDiscountPriceWithCentPrice:(id)a0 withPrefix:(id)a1 withSuffix:(id)a2;
- (void)updateMarkPriceWithGoods:(id)a0;
- (void)updateMarkPriceWithGoodsMarketPrice:(id)a0 withPrefix:(id)a1;
- (void)configWithPriceElement:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
