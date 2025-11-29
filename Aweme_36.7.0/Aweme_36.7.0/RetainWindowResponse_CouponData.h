@class NSString;

@interface RetainWindowResponse_CouponData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *couponMetaId;
@property (nonatomic) long long credit;
@property (nonatomic) long long metaType;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) long long expireTimestamp;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) long long threshold;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *couponId;
@property (nonatomic) BOOL hasApplied;
@property (copy, nonatomic) NSString *discountInfoDesc;

+ (id)descriptor;

@end
