@class FinderLiveMilestoneLotteryInfo_ParticipantInfo, NSString, FinderLiveMilestoneLotteryInfo_ClaimInfo, FinderLiveMilestoneLotteryInfo_AttendInfo, FinderLiveMilestoneLotteryInfo_ResultInfo, FinderLiveMilestoneLotteryInfo_BaseInfo, FinderLiveMilestoneLotteryInfo_PrizeInfo;

@interface FinderLiveMilestoneLotteryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_BaseInfo *baseInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_PrizeInfo *prizeInfo;
@property (nonatomic) unsigned int extFlag;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_AttendInfo *attendInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_ResultInfo *resultInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_ParticipantInfo *participantInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_ClaimInfo *claimInfo;

+ (void)initialize;

@end
