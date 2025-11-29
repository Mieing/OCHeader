@class NSString, NSNumber;

@interface IESECGoodsCouponModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *couponID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *shopName;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *expireTime;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSNumber *threshold;
@property (copy, nonatomic) NSString *useScope;
@property (retain, nonatomic) NSNumber *discountRate;
@property (retain, nonatomic) NSNumber *discountLimit;
@property (copy, nonatomic) NSString *applyType;
@property (nonatomic) long long periodType;
@property (nonatomic) long long periodOfValidity;
@property (nonatomic) long long couponOptions;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *statusDescription;
@property (copy, nonatomic) NSString *whatCoupon;
@property (nonatomic) BOOL isDiscount;
@property (copy, nonatomic) NSString *thresholdDescription;
@property (copy, nonatomic) NSString *timeLimitDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
