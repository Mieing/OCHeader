@class NSString, IESECGoodsPrice, IESECShopRecommendAdditionInfo, IESECShopRecommendGoodsBaseInfo;

@interface IESECShopRecommendGoodsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopRecommendGoodsBaseInfo *baseInfo;
@property (retain, nonatomic) IESECShopRecommendAdditionInfo *additionInfo;
@property (retain, nonatomic) IESECGoodsPrice *price;
@property (nonatomic) double cardWidth;
@property (copy, nonatomic) NSString *shopUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
