@class NSString, NSNumber;

@interface BDXBridgeOpenPlatformGetLocationMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *clientKey;
@property (retain, nonatomic) NSNumber *quickPositioning;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
