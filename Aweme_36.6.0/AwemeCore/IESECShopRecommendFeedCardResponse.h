@class IESECShopRecommendFeedDividerResponse, IESECShopGoodsModel;

@interface IESECShopRecommendFeedCardResponse : IESECBaseApiModel

@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) IESECShopGoodsModel *product;
@property (retain, nonatomic) IESECShopRecommendFeedDividerResponse *divider;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
