@class NSString, NSDictionary;

@interface BDXBridgeHotSpotBroadcastMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionid;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
