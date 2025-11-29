@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenMixRenderVideoFullPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *containerId;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
