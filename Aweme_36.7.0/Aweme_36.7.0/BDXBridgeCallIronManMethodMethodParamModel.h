@class NSString, NSDictionary;

@interface BDXBridgeCallIronManMethodMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
