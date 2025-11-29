@class NSNumber;

@interface BDXBridgeSearchImmersiveBannerMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL isAuto;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *offset;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
