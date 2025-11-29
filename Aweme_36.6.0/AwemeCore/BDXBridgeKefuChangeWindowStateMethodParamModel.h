@class NSString, NSDictionary;

@interface BDXBridgeKefuChangeWindowStateMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *windowId;
@property (copy, nonatomic) NSDictionary *stateConfig;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
