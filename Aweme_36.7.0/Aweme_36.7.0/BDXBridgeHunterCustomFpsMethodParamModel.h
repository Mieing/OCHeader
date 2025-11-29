@class NSString;

@interface BDXBridgeHunterCustomFpsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *fpsType;
@property (nonatomic) long long fpsTimeSlot;

+ (id)requiredKeyPaths;
+ (id)fpsTimeSlotJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
