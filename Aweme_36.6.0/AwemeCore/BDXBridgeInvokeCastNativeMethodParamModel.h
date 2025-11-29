@class NSString, NSDictionary;

@interface BDXBridgeInvokeCastNativeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
