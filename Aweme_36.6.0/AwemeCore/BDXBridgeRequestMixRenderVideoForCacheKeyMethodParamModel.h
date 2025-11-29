@class NSString, NSArray, NSDictionary;

@interface BDXBridgeRequestMixRenderVideoForCacheKeyMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *containerId;
@property (retain, nonatomic) NSArray *ids;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
