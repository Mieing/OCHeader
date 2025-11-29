@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeEcommercePageToLiveMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *creative_id;
@property (copy, nonatomic) NSString *log_extra;
@property (copy, nonatomic) NSString *aweme_id;
@property (retain, nonatomic) NSNumber *ad_id;
@property (copy, nonatomic) NSString *open_url;
@property (copy, nonatomic) NSString *live_action_extra;
@property (retain, nonatomic) NSNumber *ad_source_type;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
