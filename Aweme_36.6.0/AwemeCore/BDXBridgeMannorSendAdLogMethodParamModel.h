@class NSString, NSDictionary, NSArray, NSNumber;

@interface BDXBridgeMannorSendAdLogMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *has_ad_info;
@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *track_label;
@property (retain, nonatomic) NSNumber *group_id;
@property (copy, nonatomic) NSString *log_extra;
@property (copy, nonatomic) NSString *creative_id;
@property (copy, nonatomic) NSDictionary *extParam;
@property (retain, nonatomic) NSArray *track_url_list;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
