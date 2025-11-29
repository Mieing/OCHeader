@class NSString, NSDictionary;

@interface BDXBridgeEcomSelectBannerFilterMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL is_ban_search;
@property (nonatomic) BOOL is_select;
@property (copy, nonatomic) NSString *data_id;
@property (copy, nonatomic) NSDictionary *filter_data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
