@interface BDPCDDynamicCardMemberCouponView : BDPCDDynamicCardCouponView

+ (double)nameLabelHeight;
+ (double)textLabelHeight;
+ (id)priceFont;
+ (id)thresholdFont;
+ (double)leftPartHeightWithElementModel:(id)a0;
+ (double)rightPartHeightWithElementModel:(id)a0;
+ (double)rightPartTopMarginWithCouponModel:(id)a0;
+ (double)rightPartLeftMargin;
+ (double)leftPartTopMarginWithCouponModel:(id)a0;
+ (double)leftPartBottomMarginWithCouponModel:(id)a0;
+ (id)priceAfterFixFont;
+ (double)priceLabelHeight;
+ (double)thresholdLabelHeight;
+ (double)rightPartBottomMarginWithCouponModel:(id)a0;
+ (id)textFont;
+ (id)nameFont;

- (id)priceFontWithPriceStr:(id)a0;
- (double)leftPartWidthWithElementModel:(id)a0;
- (id)blackBackgroundColor;
- (id)invalidRightBkgColor;
- (id)defaultBorderRadius;
- (BOOL)supportUsageScope;
- (id)strBetweenPriceAndAfterfix;
- (id)invalidBorderColor;

@end
