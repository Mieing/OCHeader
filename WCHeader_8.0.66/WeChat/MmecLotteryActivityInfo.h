@class NSString;

@interface MmecLotteryActivityInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizAcctAppid;
@property (retain, nonatomic) NSString *shopAppid;
@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned long long activityOrderId;

+ (void)initialize;

@end
