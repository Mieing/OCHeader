@class NSArray;

@interface IESECWindowFeedComponentResponse : IESECBaseApiModel

@property (copy, nonatomic) NSArray *components;

+ (id)componentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
