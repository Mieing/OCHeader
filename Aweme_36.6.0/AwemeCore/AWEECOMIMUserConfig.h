@class NSString, NSDictionary;

@interface AWEECOMIMUserConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) int input_association_switch;
@property (nonatomic) int order_attention_main;
@property (nonatomic) int order_attention;
@property (nonatomic) int order_service_main;
@property (nonatomic) int order_service;
@property (nonatomic) int normal_activity_main;
@property (nonatomic) int normal_activity;
@property (nonatomic) int promotion_activity_main;
@property (nonatomic) int promotion_activity;
@property (nonatomic) int sub_gray_ab_switch;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSDictionary *switch_map;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)bizTypeForType:(unsigned long long)a0;
+ (unsigned long long)typeForDesc:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)getStatusForType:(unsigned long long)a0;
- (BOOL)getStatusWithBizCategory:(id)a0;
- (void).cxx_destruct;

@end
