@class NSString, NSDictionary;

@interface BDXBridgeInspireConnectWithLiveMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
