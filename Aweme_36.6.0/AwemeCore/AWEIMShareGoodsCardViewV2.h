@class UIImageView, YYLabel, UIFont;

@interface AWEIMShareGoodsCardViewV2 : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *priceSymbolLabel;
@property (retain, nonatomic) UIFont *priceSymbolFont;
@property (retain, nonatomic) YYLabel *priceLabel;
@property (retain, nonatomic) UIFont *priceFont;
@property (retain, nonatomic) YYLabel *salesLabel;
@property (retain, nonatomic) UIFont *salesFont;

+ (struct CGSize { double x0; double x1; })adjustIconSize:(id)a0;
+ (struct CGSize { double x0; double x1; })contentSizeWithModel:(id)a0;

- (void)configPriceSymbolContent;
- (void)configTitleLabelContent:(id)a0;
- (void)refreshUIWithModelForPrice:(id)a0;
- (void)refreshUIWithModelForSales:(id)a0;
- (void)configPriceLabelContentForOrigin:(id)a0;
- (void)configSalesLabelContent:(id)a0;
- (BOOL)canShowSalesLabelForPrice:(id)a0;
- (id)formatNumber:(double)a0 divisor:(double)a1 places:(int)a2;
- (void)refreshUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
