@class AWEECOMIMDynamicCardCommonDiffBorderRadiusView, UIButton, BDPCDDynamicCardBorderModel, BDPCDDynamicCardDashedLineView, UILabel, BDPCDDynamicCardCouponViewBorderView;

@interface BDPCDDynamicCardCouponView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;
@property (retain, nonatomic) BDPCDDynamicCardCouponViewBorderView *leftView;
@property (retain, nonatomic) BDPCDDynamicCardCouponViewBorderView *rightView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *thresholdLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) BDPCDDynamicCardBorderModel *invalidBorder;
@property (retain, nonatomic) BDPCDDynamicCardBorderModel *validBorder;
@property (retain, nonatomic) BDPCDDynamicCardDashedLineView *midLine;

+ (double)nameLabelHeight;
+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)textLabelHeight;
+ (id)priceFont;
+ (id)thresholdFont;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
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
+ (double)buttonHeight;
+ (id)buttonFont;
+ (id)nameFont;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (id)priceFontWithPriceStr:(id)a0;
- (double)leftPartWidthWithElementModel:(id)a0;
- (void)updateLeftViewWithCouponModel:(id)a0;
- (void)updateRightViewWithCouponModel:(id)a0;
- (id)redBackgroundColor;
- (id)validMidLineColor;
- (id)blackBackgroundColor;
- (id)InvalidMidLineColor;
- (id)invalidRightBkgColor;
- (id)defaultBorderRadius;
- (double)couponCenterRadius;
- (double)rightPartRightMarginWithCouponModel:(id)a0;
- (id)redTextColorWithCouponModel:(id)a0;
- (id)blackTextColorWithCouponModel:(id)a0;
- (double)buttonWidthWithCouponModel:(id)a0;
- (BOOL)supportUsageScope;
- (double)leftPartLeftMarginWithCouponModel:(id)a0;
- (id)strBetweenPriceAndAfterfix;
- (id)getPriceStringWithCouponModel:(id)a0;
- (id)getValidBorder;
- (id)getInvalidBorder;
- (id)validBorderColor;
- (id)invalidBorderColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
