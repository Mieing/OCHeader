@class NSString, NSNumber;

@interface BDXBridgeHunterPreloadAppStoreMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *compliance_data;
@property (copy, nonatomic) NSString *web_url;
@property (copy, nonatomic) NSString *skan_parameters;
@property (retain, nonatomic) NSNumber *download_scene;
@property (copy, nonatomic) NSString *creative_id;
@property (copy, nonatomic) NSString *log_extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
