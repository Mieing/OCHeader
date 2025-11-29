@class NSString, NSNumber, NSDictionary;

@interface BDASifXBridgeSendAdLogMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) NSNumber *has_ad_info;
@property (retain, nonatomic) NSNumber *creative_id;
@property (copy, nonatomic) NSString *log_extra;
@property (retain, nonatomic) NSDictionary *extParam;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
