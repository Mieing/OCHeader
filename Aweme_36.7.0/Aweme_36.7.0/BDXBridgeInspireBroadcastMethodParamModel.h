@class NSString, NSDictionary;

@interface BDXBridgeInspireBroadcastMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
