@class NSString, NSDictionary;

@interface BDXBridgeSearchBannerSelectMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cache_id;
@property (copy, nonatomic) NSString *raw_data;
@property (copy, nonatomic) NSString *search_pass_params_struct;
@property (copy, nonatomic) NSString *enter_method;
@property (copy, nonatomic) NSDictionary *filter_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
