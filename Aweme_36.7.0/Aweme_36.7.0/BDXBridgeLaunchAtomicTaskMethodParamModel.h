@class NSString;

@interface BDXBridgeLaunchAtomicTaskMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *enter_from;
@property (copy, nonatomic) NSString *task_config;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
