@class NSString, GPBInt64ObjectDictionary;

@interface CouponInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL applied;
@property (copy, nonatomic) NSString *reqId;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long bizTag;
@property (nonatomic) long long adId;
@property (copy, nonatomic) NSString *cid;
@property (nonatomic) long long type;
@property (nonatomic) long long threshold;
@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *applyHost;
@property (copy, nonatomic) NSString *applyApi;
@property (nonatomic) int applyAuthType;
@property (retain, nonatomic) GPBInt64ObjectDictionary *incrCoupons;
@property (readonly, nonatomic) unsigned long long incrCoupons_Count;
@property (nonatomic) long long realThreshold;
@property (nonatomic) long long realAmount;
@property (nonatomic) long long discount;
@property (nonatomic) long long discountLimit;

+ (id)descriptor;

@end
