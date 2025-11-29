@class IESECDiscountPrice, NSString, IESECGoodsDepositPrice, IESECGoodsGroupBuyHelperPrice, IESECURLModel, NSNumber, IESECGoodsSecKillPrice;

@interface IESECGoodsPriceInfoModel : MTLModel <IESECGoodsPriceLabelModel, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (retain, nonatomic) IESECDiscountPrice *discountPrice;
@property (retain, nonatomic) IESECGoodsDepositPrice *depositPrice;
@property (retain, nonatomic) IESECGoodsGroupBuyHelperPrice *groupBuyHelperPrice;
@property (retain, nonatomic) IESECGoodsSecKillPrice *secKillPrice;
@property (copy, nonatomic) NSString *pendingPrice;
@property (copy, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSString *priceLowLabelString;
@property (copy, nonatomic) NSString *header;
@property (retain, nonatomic) IESECURLModel *headerIcon;
@property (copy, nonatomic) NSString *priceTrackingInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasGapPrice;
- (BOOL)showMaxPrice;
- (id)price;
- (void).cxx_destruct;

@end
