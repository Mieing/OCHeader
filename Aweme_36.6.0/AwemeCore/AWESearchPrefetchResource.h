@class NSArray;

@interface AWESearchPrefetchResource : AWEBaseApiModel

@property (retain, nonatomic) NSArray *prefetchImage;
@property (copy, nonatomic) NSArray *dynamicComponents;

+ (id)prefetchImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
