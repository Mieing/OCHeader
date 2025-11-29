@interface EcsCheckCoupon : WXPBGeneratedMessage

@property (nonatomic) BOOL canReceive;
@property (nonatomic) BOOL bCanUse;
@property (nonatomic) BOOL cCanUse;
@property (nonatomic) BOOL isReceiveTime;
@property (nonatomic) BOOL isEnough;
@property (nonatomic) unsigned int limitNumOnePerson;
@property (nonatomic) BOOL checkKeyOk;
@property (nonatomic) BOOL isNewBuyer;
@property (nonatomic) unsigned int buyOrderCnt;
@property (nonatomic) BOOL bIsUseTime;
@property (nonatomic) unsigned int receivedNum;
@property (nonatomic) BOOL bIsCondition;
@property (nonatomic) BOOL cIsCondition;
@property (nonatomic) BOOL cIsUseTime;
@property (nonatomic) unsigned int usedNum;
@property (nonatomic) unsigned int discountedPrice;
@property (nonatomic) unsigned int discountConditionNeedPrice;
@property (nonatomic) unsigned int canUpTimes;
@property (nonatomic) BOOL autoReceive;

+ (void)initialize;

@end
