@class NSString;

@interface AWEDouPlusCouponModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *extraDesc;
@property (copy, nonatomic) NSString *funcDesc;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *aim;
@property (nonatomic) long long bonusAmount;
@property (nonatomic) long long ceiling;
@property (copy, nonatomic) NSString *couponStatusTag;
@property (copy, nonatomic) NSString *couponType;
@property (copy, nonatomic) NSString *taskStatus;
@property (nonatomic) long long threshold;
@property (nonatomic) BOOL canUse;
@property (copy, nonatomic) NSString *couponIDString;
@property (copy, nonatomic) NSString *couponName;
@property (nonatomic) long long expireTime;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long discountRate;
@property (copy, nonatomic) NSString *ceilingDesc;
@property (nonatomic) long long couponId;
@property (nonatomic) long long createTime;
@property (nonatomic) long long discountAmount;
@property (copy, nonatomic) NSString *thresholdDesc;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
