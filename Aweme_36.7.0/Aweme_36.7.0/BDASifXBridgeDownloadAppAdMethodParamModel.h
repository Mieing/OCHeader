@class NSString, NSNumber;

@interface BDASifXBridgeDownloadAppAdMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *open_url;
@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *creative_id;
@property (copy, nonatomic) NSString *log_extra;
@property (copy, nonatomic) NSString *download_url;
@property (copy, nonatomic) NSString *apple_id;
@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *skan_parameters;
@property (copy, nonatomic) NSString *web_url;
@property (retain, nonatomic) NSNumber *download_scene;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
