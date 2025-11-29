@class IESECMallInnerFeedProductPriceDescModel, NSString, NSArray, NSNumber;

@interface IESECMallInnerFeedProductPriceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *originalPrice;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (retain, nonatomic) IESECMallInnerFeedProductPriceDescModel *minPriceDesc;
@property (retain, nonatomic) NSNumber *hotSalePrice;
@property (copy, nonatomic) NSString *hotSaleSKUID;
@property (retain, nonatomic) IESECMallInnerFeedProductPriceDescModel *hotSalePriceDesc;
@property (retain, nonatomic) NSNumber *showPrice;
@property (copy, nonatomic) NSString *showSkuID;
@property (copy, nonatomic) NSString *showPriceType;
@property (copy, nonatomic) NSArray *suffixArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suffixArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
