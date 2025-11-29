@class IESECDiscountPrice, IESECGoodsPriceLabel, UIImageView, UILabel, NSNumber;

@interface IESECGoodsDiscountPriceView : UIView

@property (retain, nonatomic) UIImageView *dashLineImageView;
@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (retain, nonatomic) IESECDiscountPrice *discountModel;
@property (nonatomic) BOOL hasGapPrice;
@property (nonatomic) BOOL hideDashLine;
@property (retain, nonatomic) NSNumber *minPrice;
@property (nonatomic) long long discountStyle;
@property (nonatomic) long long showPriceStyle;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *prefixAreaLabel;

- (id)initDiscountPriceViewWithDiscountConfigure:(id)a0;
- (void)updateUIWithDiscountConfigure:(id)a0;
- (void)updateUIWithDiscountPrice:(id)a0 minPrice:(id)a1 isGapPrice:(BOOL)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;

@end
