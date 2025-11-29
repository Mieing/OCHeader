@class NSString, FinderLiveLotteryAttendMethod, FinderLiveLotteryInfo_ParticipantInfo, FinderLiveLotteryPrizeMethod, FinderLiveLotteryWinnerExtInfo, FinderLiveLotteryParticipability, FinderLiveLotteryAnchorInfo, FinderLiveLotteryClaimMethod;

@interface FinderLiveLotteryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int remainTime;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) FinderLiveLotteryAttendMethod *method;
@property (nonatomic) unsigned int winnerCnt;
@property (nonatomic) unsigned int participateCount;
@property (nonatomic) unsigned int lotteryStatus;
@property (nonatomic) unsigned int extFlag;
@property (nonatomic) unsigned int realWinnerCnt;
@property (retain, nonatomic) FinderLiveLotteryInfo_ParticipantInfo *participantInfo;
@property (retain, nonatomic) FinderLiveLotteryParticipability *participability;
@property (retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod;
@property (retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod;
@property (retain, nonatomic) FinderLiveLotteryWinnerExtInfo *winnerInfo;
@property (retain, nonatomic) FinderLiveLotteryAnchorInfo *anchorInfo;
@property (retain, nonatomic) NSString *remindWording;

+ (void)initialize;

@end
