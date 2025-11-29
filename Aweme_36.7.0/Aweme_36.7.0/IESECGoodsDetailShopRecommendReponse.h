@class NSArray, NSString;

@interface IESECGoodsDetailShopRecommendReponse : IESECBaseApiModel

@property (copy, nonatomic) NSArray *shopRecommendGoods;
@property (copy, nonatomic) NSString *shopUrl;

+ (id)shopRecommendGoodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
