@class UILabel, AWEGrouponLifeFeedsSaleInfo;

@interface AWEGrouponLifeFeedsSaleInfoView : UIView

@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) AWEGrouponLifeFeedsSaleInfo *model;

- (void)setPriceAndDiscountWithPriceInfo:(id)a0;
- (void)setSalesLabelWithRightInfo:(id)a0;
- (void)checkPricePriority:(id)a0;
- (id)rgbaStringFromARGBString:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
