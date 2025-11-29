@class NSString;

@interface BDPXBridgePreloadMicroAppMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *mini_app_url;
@property (copy, nonatomic) NSString *degrade_reason;
@property (copy, nonatomic) NSString *miniapp_schema;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
