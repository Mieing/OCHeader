@class NSString, NSNumber;

@interface BDASifXBridgePreloadAppAdMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *apple_id;
@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *log_extra;
@property (copy, nonatomic) NSString *web_url;
@property (retain, nonatomic) NSNumber *download_scene;
@property (copy, nonatomic) NSString *skan_parameters;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
