@class NSString, NSDictionary;

@interface BDXBridgePoiGoodsShareMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *trace_session_id;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *image;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *innerUrl;
@property (copy, nonatomic) NSString *report_url;
@property (copy, nonatomic) NSString *awe_type;
@property (copy, nonatomic) NSDictionary *im_extra;
@property (copy, nonatomic) NSDictionary *qrcode_share_info;
@property (copy, nonatomic) NSDictionary *command_share_params;
@property (copy, nonatomic) NSDictionary *extra_data;
@property (copy, nonatomic) NSDictionary *carryParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
