@class NSString, NSArray, NSDictionary;

@interface BDXBridgeSearchRequestAwemeForCacheKeyMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSArray *ids;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
