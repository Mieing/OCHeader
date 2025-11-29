@class NSArray;

@interface IESECShopActivityDynamicBlock : IESECShopActivityDynamicComponent

@property (copy, nonatomic) NSArray *moduleList;

+ (id)moduleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)parseData;

@end
