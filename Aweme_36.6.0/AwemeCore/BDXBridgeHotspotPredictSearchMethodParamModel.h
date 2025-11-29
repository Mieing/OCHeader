@class NSString, NSNumber;

@interface BDXBridgeHotspotPredictSearchMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *searchSchema;
@property (retain, nonatomic) NSNumber *countdownTime;
@property (copy, nonatomic) NSString *prefetchType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
