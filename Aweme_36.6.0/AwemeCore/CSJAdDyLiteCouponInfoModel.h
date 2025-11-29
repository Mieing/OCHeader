@class NSString;

@interface CSJAdDyLiteCouponInfoModel : CSJBasicModel

@property (nonatomic) long long action;
@property (nonatomic) long long activity_id;
@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *button_text;
@property (copy, nonatomic) NSString *coupon_meta_id;
@property (nonatomic) unsigned long long coupon_scene;
@property (nonatomic) long long coupon_style;
@property (nonatomic) long long device_id;
@property (copy, nonatomic) NSString *expire_time;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long fc_rule_id;
@property (nonatomic) BOOL has_coupon;
@property (copy, nonatomic) NSString *incr_coupon;
@property (copy, nonatomic) NSString *scene_key;
@property (copy, nonatomic) NSString *start_time;
@property (nonatomic) long long style;
@property (nonatomic) long long style_type;
@property (nonatomic) long long threshold;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *unique_id;
@property (nonatomic) long long user_id;
@property (nonatomic) long long version;

- (BOOL)canApplyCoupon;
- (void).cxx_destruct;

@end
