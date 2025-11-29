@class NSString;

@interface AWEFeedInstantGameCouponModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *couponMetaID;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long discountType;
@property (nonatomic) int discountAmount;
@property (nonatomic) int discountRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)couponDescription;
- (void).cxx_destruct;

@end
