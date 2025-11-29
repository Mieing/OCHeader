@class NSArray, NSNumber, NSString;

@interface IESECShopTabModelNewCompatible : IESECShopTabModel

@property (copy, nonatomic) NSArray *subTabArray;
@property (copy, nonatomic) NSNumber *bottomModuleType;
@property (copy, nonatomic) NSString *bottomModuleParams;

+ (id)subTabArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
