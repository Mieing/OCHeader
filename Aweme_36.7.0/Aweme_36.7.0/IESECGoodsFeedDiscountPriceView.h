@class IESECDiscountPrice, IESECGoodsPriceLabel, UILabel, NSNumber;

@interface IESECGoodsFeedDiscountPriceView : UIView

@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (retain, nonatomic) IESECDiscountPrice *discountModel;
@property (nonatomic) BOOL hasGapPrice;
@property (nonatomic) BOOL hideBackground;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *prefixAreaLabel;

- (id)initDiscountPriceViewWithDiscountConfigure:(id)a0;
- (void)updateUIWithDiscountConfigure:(id)a0;
- (void)configInternalFeedV2Style;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;

@end
