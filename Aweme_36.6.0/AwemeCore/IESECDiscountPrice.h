@class NSNumber, NSString;

@interface IESECDiscountPrice : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *discountPrice;
@property (copy, nonatomic) NSString *discountPrefix;
@property (copy, nonatomic) NSString *discountSuffix;
@property (retain, nonatomic) NSNumber *discountMinPrice;
@property (retain, nonatomic) NSNumber *discountMaxPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
