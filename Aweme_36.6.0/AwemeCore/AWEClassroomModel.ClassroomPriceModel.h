@interface AWEClassroomModel.ClassroomPriceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long showPrice;
@property (nonatomic) long long priceType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
