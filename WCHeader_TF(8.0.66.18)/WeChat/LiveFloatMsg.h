@class LiveFloatMsgPaymentInfo, FreeFloatMsgInfo;

@interface LiveFloatMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int usedCount;
@property (nonatomic) unsigned int remainCount;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) LiveFloatMsgPaymentInfo *info;
@property (retain, nonatomic) FreeFloatMsgInfo *stayLiveFreeFloatMsgInfo;

+ (void)initialize;

@end
