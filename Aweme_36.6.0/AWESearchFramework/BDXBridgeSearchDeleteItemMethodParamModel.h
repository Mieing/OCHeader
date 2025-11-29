@class NSString, NSDictionary;

@interface BDXBridgeSearchDeleteItemMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *search_type;
@property (copy, nonatomic) NSString *search_result_id;
@property (copy, nonatomic) NSDictionary *delete_item_log_data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
