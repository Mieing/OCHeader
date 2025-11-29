@class NSString;

@interface BDXBridgePresentSKOverlayMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *log_extra;
@property (copy, nonatomic) NSString *skan_parameters;
@property (copy, nonatomic) NSString *creative_id;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
