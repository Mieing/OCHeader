@class NSString, NSDictionary;

@interface BDXBridgeOpenAppStoreMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSDictionary *ug_route_out_customs_info;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
