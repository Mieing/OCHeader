@class NSString, NSNumber, AWEURLModel;

@interface AWEShareSchemaGoodsModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *goodsName;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *sales;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *markingPrice;
@property (retain, nonatomic) NSNumber *baseMinPrice;
@property (copy, nonatomic) NSString *basePricePrefix;
@property (retain, nonatomic) NSNumber *discountMinPrice;
@property (copy, nonatomic) NSString *discountPricePrefix;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
