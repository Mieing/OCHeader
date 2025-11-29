@interface EcsCouponStockInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int issuedNum;
@property (nonatomic) unsigned int receiveNum;
@property (nonatomic) unsigned int usedNum;
@property (nonatomic) unsigned int issuedAmount;
@property (nonatomic) unsigned int receivedAmount;
@property (nonatomic) unsigned int usedAmount;
@property (nonatomic) unsigned long long orderAmount;
@property (nonatomic) unsigned int receiveRatio;
@property (nonatomic) unsigned int useRatio;

+ (void)initialize;

@end
