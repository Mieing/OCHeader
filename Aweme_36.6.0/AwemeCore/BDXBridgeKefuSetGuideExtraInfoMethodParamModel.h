@class NSString, NSDictionary;

@interface BDXBridgeKefuSetGuideExtraInfoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *guideExtraInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
