@class NSString, NSArray, IESECGoodsDetailModel, IESECInternalFeedStyleModel, IESECGoodsDetailPromotionV2Response, NSDictionary, IESECGoodsDeletedModel, NSNumber;

@interface IESECGoodsDetailResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECGoodsDetailModel *promotion;
@property (copy, nonatomic) NSArray *promotions;
@property (retain, nonatomic) id rawResponse;
@property (retain, nonatomic) NSDictionary *orderLynxRawDataDict;
@property (nonatomic) BOOL fromCache;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, copy, nonatomic) NSArray *rawResponsePromotions;
@property (retain, nonatomic) IESECInternalFeedStyleModel *internalStyle;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *bdTuring;
@property (nonatomic) double requestStart;
@property (copy, nonatomic) NSNumber *priceDiff;
@property (retain, nonatomic) IESECGoodsDeletedModel *goodsDeleted;
@property (retain, nonatomic) IESECGoodsDetailPromotionV2Response *promotionV2Response;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *cacheKey;

+ (id)promotionsJSONTransformer;
+ (id)promotionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)setupRawResponsePromotionsWithResponse:(id)a0;
- (void).cxx_destruct;

@end
