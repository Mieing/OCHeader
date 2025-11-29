@class NSNumber, NSString, NSArray;

@interface IESECRecommendCommonProductPriceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (copy, nonatomic) NSString *typeText;
@property (retain, nonatomic) NSNumber *hotSalePrice;
@property (copy, nonatomic) NSString *hotSaleSKUID;
@property (copy, nonatomic) NSArray *suffixArray;
@property (retain, nonatomic) NSNumber *originalPrice;
@property (retain, nonatomic) NSNumber *referencePrice;
@property (retain, nonatomic) NSNumber *showPrice;
@property (copy, nonatomic) NSString *showPriceType;
@property (copy, nonatomic) NSString *showSkuID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suffixArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)priceInfoString;
- (void).cxx_destruct;

@end
