@class NSString;

@interface EcsUserExpiredExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *timerTaskId;
@property (nonatomic) unsigned long long useTime;
@property (nonatomic) unsigned long long oldUserCouponId;
@property (nonatomic) BOOL isStressTestUserCoupon;
@property (nonatomic) unsigned int couponStockSplitIdx;
@property (nonatomic) unsigned int userCouponStatusBeforeUseruinRecycle;
@property (nonatomic) unsigned long long useruinRecycleTime;
@property (retain, nonatomic) NSString *transactionIdOnRecv;
@property (nonatomic) unsigned int invalidType;
@property (nonatomic) unsigned int tempInvalidType;

+ (void)initialize;

@end
