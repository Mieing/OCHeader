@class NSString, NSNumber;

@interface IESECLiveCouponModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *metaId;
@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSString *endTime;
@property (retain, nonatomic) NSNumber *periodType;
@property (retain, nonatomic) NSNumber *validPeriod;
@property (copy, nonatomic) NSString *startApplyTime;
@property (copy, nonatomic) NSString *endApplyTime;
@property (copy, nonatomic) NSString *couponName;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *threshold;
@property (retain, nonatomic) NSNumber *credit;
@property (retain, nonatomic) NSNumber *maxApplyTimes;
@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *typeDetail;
@property (copy, nonatomic) NSString *typeTitle;
@property (retain, nonatomic) NSNumber *discount;
@property (copy, nonatomic) NSString *shopId;
@property (retain, nonatomic) NSNumber *payType;
@property (retain, nonatomic) NSNumber *maxDiscountLimit;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *typeString;
@property (copy, nonatomic) NSString *whatCoupon;
@property (copy, nonatomic) NSString *couponString;
@property (copy, nonatomic) NSString *autoApplyMsg;
@property (retain, nonatomic) NSNumber *channelId;
@property (retain, nonatomic) NSNumber *leftAmount;
@property (nonatomic) BOOL hasApplied;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *shopLogo;
@property (retain, nonatomic) NSNumber *totalAmount;
@property (nonatomic) long long kolUserTag;
@property (retain, nonatomic) NSNumber *isShow;
@property (retain, nonatomic) NSString *typeIconURL;
@property (retain, nonatomic) NSNumber *typeIconWidth;
@property (retain, nonatomic) NSNumber *typeIconHeight;
@property (nonatomic) long long liveCouponStatus;
@property (nonatomic) long long source;
@property (readonly, nonatomic) BOOL isFansCoupon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)discountType;
- (void).cxx_destruct;

@end
