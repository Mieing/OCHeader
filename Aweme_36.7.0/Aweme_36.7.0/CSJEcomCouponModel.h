@class NSString;

@interface CSJEcomCouponModel : NSObject <BUYYModel, CSJModelSerialization>

@property (nonatomic) long long user_id;
@property (copy, nonatomic) NSString *coupon_meta_id;
@property (copy, nonatomic) NSString *unique_id;
@property (nonatomic) long long device_id;
@property (nonatomic) BOOL has_coupon;
@property (nonatomic) long long coupon_scene;
@property (nonatomic) long long type;
@property (nonatomic) long long threshold;
@property (copy, nonatomic) NSString *scene_key;
@property (nonatomic) long long activity_id;
@property (nonatomic) long long amount;
@property (nonatomic) long long action;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *start_time;
@property (copy, nonatomic) NSString *expire_time;
@property (copy, nonatomic) NSString *button_text;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:(id)a0;

- (BOOL)canApplyCoupon;
- (BOOL)canShowToast;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
