@class NSString, NSNumber, NSDictionary;

@interface IESECLiveGoodsPageGetModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSDictionary *promotions;
@property (retain, nonatomic) NSDictionary *products;
@property (retain, nonatomic) NSDictionary *promotionsV2;
@property (retain, nonatomic) NSDictionary *productsV2;
@property (retain, nonatomic) NSDictionary *topPromotions;

+ (id)productsJSONTransformer;
+ (id)goodsModelDicJSONTransformerWithV2:(BOOL)a0;
+ (id)promotionsJSONTransformer;
+ (id)promotionsV2JSONTransformer;
+ (id)productsV2JSONTransformer;
+ (id)topPromotionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
