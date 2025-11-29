@class EcsCouponKey, EcsCouponInfo;

@interface EcsCoupon : WXPBGeneratedMessage

@property (retain, nonatomic) EcsCouponKey *couponKey;
@property (nonatomic) int status;
@property (retain, nonatomic) EcsCouponInfo *couponInfo;
@property (nonatomic) int version;
@property (nonatomic) unsigned long long kvVersion;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned long long updateTime;

+ (void)initialize;

@end
