@class FinderLiveLotteryInfo, FinderLotteryLiveRecordList_MilestoneLotteryInfo;

@interface FinderLotteryLiveRecordList_LotteryInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) FinderLiveLotteryInfo *nomalInfo;
@property (retain, nonatomic) FinderLotteryLiveRecordList_MilestoneLotteryInfo *milestoneInfo;

+ (void)initialize;

@end
