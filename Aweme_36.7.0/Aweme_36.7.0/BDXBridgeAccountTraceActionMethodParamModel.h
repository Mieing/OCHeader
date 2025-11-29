@class NSString;

@interface BDXBridgeAccountTraceActionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *scene;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
