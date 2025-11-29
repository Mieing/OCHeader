@class NSString;

@interface BDXBridgeHotspotPredictSearchMissMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *prefetchTag;
@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *reason;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
