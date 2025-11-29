@class NSNumber, NSDictionary;

@interface BDXBridgeEcTriggerPreProcessorMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *optimization;
@property (copy, nonatomic) NSDictionary *data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
