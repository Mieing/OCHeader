@class NSString, NSDictionary;

@interface AWEAdDownloadClickParamModel : BDXBridgeModel

@property (nonatomic) BOOL direct_download;
@property (copy, nonatomic) NSString *compliance_data;
@property (copy, nonatomic) NSString *creative_id;
@property (copy, nonatomic) NSString *bundle_biz_id;
@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) long long preload_web;
@property (copy, nonatomic) NSString *log_extra;
@property (copy, nonatomic) NSString *download_url;
@property (nonatomic) BOOL app_store_enabled;
@property (nonatomic) BOOL app_store_reuse_disabled;
@property (copy, nonatomic) NSString *skan_parameters;
@property (nonatomic) long long download_scene;
@property (copy, nonatomic) NSString *web_url;
@property (retain, nonatomic) NSDictionary *extParam;
@property (copy, nonatomic) NSString *refer;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
