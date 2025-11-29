@class NSString, NSNumber;

@interface IESECSKUNewPriceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (readonly, nonatomic) BOOL isUnderline;
@property (readonly, nonatomic) BOOL isReducePrice;
@property (copy, nonatomic) NSString *supplement;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isRangePrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
