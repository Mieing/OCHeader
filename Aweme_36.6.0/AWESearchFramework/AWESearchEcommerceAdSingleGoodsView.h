@class UILabel, AWEAwemeModel;

@interface AWESearchEcommerceAdSingleGoodsView : AWESearchEcommerceSingleGoodsView

@property (retain, nonatomic) UILabel *pricePrefix;
@property (retain, nonatomic) UILabel *lineationPrice;
@property (retain, nonatomic) UILabel *salesVolume;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (void)setupSubViews;
- (void)reloadEcommerceModel:(id)a0;
- (void)updateSubviewWithAdInfo;
- (void)updatePricePrefix;
- (void)updateLineationPrice;
- (void)updateSalesVolume;
- (void)updateAdTag;
- (id)formattedOriginPriceWithData:(long long)a0;
- (void).cxx_destruct;

@end
