@class NSString;

@interface FinderLiveAppMsgLotteryDrawInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *lotteryId;
@property (nonatomic) unsigned int remainTime;
@property (nonatomic) unsigned int lotteryStatus;
@property (nonatomic) unsigned int uin;

+ (void)initialize;

@end
