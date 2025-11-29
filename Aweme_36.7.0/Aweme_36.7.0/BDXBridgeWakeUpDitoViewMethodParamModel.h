@class NSString, NSDictionary;

@interface BDXBridgeWakeUpDitoViewMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *nodeTag;
@property (copy, nonatomic) NSDictionary *extraData;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
