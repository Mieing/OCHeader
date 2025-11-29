@class NSString, NSNumber;

@interface BDXBridgeSendCustomPerfMetricMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *value;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
