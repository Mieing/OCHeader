@class NSString;

@interface BDXBridgeGetPreciseExposureABKeys : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL exposure;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
