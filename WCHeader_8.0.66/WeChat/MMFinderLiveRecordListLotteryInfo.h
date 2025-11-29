@class MMFinderLiveMilestoneLotteryInfo, MMFinderLiveLotteryInfo;

@interface MMFinderLiveRecordListLotteryInfo : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MMFinderLiveMilestoneLotteryInfo *milestoneLotteryInfo;
@property (retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo;

- (id)initWithLotteryInfo:(id)a0;
- (void).cxx_destruct;

@end
