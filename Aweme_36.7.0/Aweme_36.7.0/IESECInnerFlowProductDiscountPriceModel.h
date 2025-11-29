@class NSString, NSNumber;

@interface IESECInnerFlowProductDiscountPriceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
