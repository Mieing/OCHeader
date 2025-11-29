@class YYLabel, AWEECOMIMProductItemModel;

@interface AWEECOMIMSubCardOriginPriceCard : AWEECOMIMSubCardProductCard

@property (retain, nonatomic) YYLabel *originPriceLabel;
@property (retain, nonatomic) AWEECOMIMProductItemModel *item;
@property (nonatomic) long long itemIndex;

- (void)tapCard;
- (void)bindProductItemModel:(id)a0 itemIndex:(long long)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
