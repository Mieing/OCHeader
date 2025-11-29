@class NSString, NSNumber;

@interface BDXBridgeCeCleanDataInjCacheMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sceneId;
@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSNumber *cleanAllForScene;
@property (copy, nonatomic) NSString *reason;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
