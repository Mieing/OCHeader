@class NSString, NSNumber, IESECInnerFlowProductDiscountPriceModel;

@interface IESECInnerFlowProductPriceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *regularPrice;
@property (retain, nonatomic) IESECInnerFlowProductDiscountPriceModel *discountPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)discountPriceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
