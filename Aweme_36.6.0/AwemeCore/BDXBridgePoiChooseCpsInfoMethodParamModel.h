@class NSString, NSDictionary;

@interface BDXBridgePoiChooseCpsInfoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cps_info;
@property (copy, nonatomic) NSString *poi_content_extra;
@property (copy, nonatomic) NSString *poi_list_info;
@property (copy, nonatomic) NSString *poi_market_cps_info;
@property (copy, nonatomic) NSString *poi_publish_type;
@property (copy, nonatomic) NSDictionary *poi_publish_param;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
