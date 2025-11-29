@class NSDictionary;

@interface IESECSKUUpdateModel : IESECBaseApiModel

@property (copy, nonatomic) NSDictionary *skus;

+ (id)skusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
