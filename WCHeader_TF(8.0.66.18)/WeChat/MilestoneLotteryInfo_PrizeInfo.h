@class FinderLiveMilestoneLotteryInfo_PrizeInfo, FinderLiveMilestoneLotteryInfo_ResultInfo;

@interface MilestoneLotteryInfo_PrizeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int prizeType;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_ResultInfo *resultInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_PrizeInfo *prizeInfo;

+ (void)initialize;

@end
