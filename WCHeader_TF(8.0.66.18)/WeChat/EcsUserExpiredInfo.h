@class EcsUserExpiredExtInfo;

@interface EcsUserExpiredInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long expireTime;
@property (nonatomic) unsigned long long userCouponId;
@property (retain, nonatomic) EcsUserExpiredExtInfo *extInfo;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long useruin;
@property (nonatomic) unsigned int receiveAmount;

+ (void)initialize;

@end
