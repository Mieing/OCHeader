@class NSString, NSDictionary;

@interface BDXBridgeAdultAuthenticateMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *flow;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
