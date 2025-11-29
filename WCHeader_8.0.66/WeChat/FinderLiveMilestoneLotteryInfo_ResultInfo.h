@class NSString, FinderLiveMilestoneLotteryInfo_ResultInfo_CouponInfo, FinderLiveMilestoneLotteryInfo_ResultInfo_RedPacketInfo, FinderLiveMilestoneLotteryInfo_ResultInfo_GiftInfo;

@interface FinderLiveMilestoneLotteryInfo_ResultInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *redPacketUri;
@property (retain, nonatomic) NSString *posterUrl;
@property (nonatomic) unsigned int supportVotingResult;
@property (nonatomic) unsigned int votingCorrect;
@property (retain, nonatomic) NSString *correctChoiceStrId;
@property (retain, nonatomic) NSString *votingDescription;
@property (retain, nonatomic) NSString *sponsorDescription;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_ResultInfo_CouponInfo *couponInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_ResultInfo_RedPacketInfo *redpacketInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_ResultInfo_GiftInfo *giftInfo;

+ (void)initialize;

@end
