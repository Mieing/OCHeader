@class NSString, WCFinderContact, FinderLiveLotteryAttendMethod, FinderLiveLotteryInfo_ParticipantInfo, FinderLiveLotteryPrizeMethod, FinderLiveLotteryWinnerExtInfo, FinderLiveLotteryParticipability, FinderLiveLotteryAnchorInfo, FinderLiveLotteryClaimMethod;

@interface MMFinderLiveLotteryInfo : NSObject

@property (retain, nonatomic) NSString *lotteryId;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int remainTime;
@property (retain, nonatomic) NSString *lotteryDescription;
@property (retain, nonatomic) FinderLiveLotteryAttendMethod *lotteryMethod;
@property (nonatomic) unsigned int winnerCnt;
@property (nonatomic) unsigned int participantCnt;
@property (nonatomic) unsigned int lotteryStatus;
@property (nonatomic) unsigned int extFlag;
@property (nonatomic) unsigned int realWinnerCnt;
@property (retain, nonatomic) FinderLiveLotteryInfo_ParticipantInfo *participantInfo;
@property (retain, nonatomic) FinderLiveLotteryParticipability *participability;
@property (retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod;
@property (retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod;
@property (retain, nonatomic) FinderLiveLotteryAnchorInfo *anchorInfo;
@property (retain, nonatomic) NSString *remindWording;
@property (nonatomic) unsigned int updateLotteryPanel;
@property (nonatomic) unsigned int methodId;
@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) FinderLiveLotteryWinnerExtInfo *winnerInfo;

- (id)initWithLotteryInfo:(id)a0;
- (id)initWithFinderLotteryInfo:(id)a0;
- (BOOL)isShopProductType;
- (BOOL)isPackageGiftType;
- (BOOL)isGameTeamUpType;
- (id)description;
- (void)updateWithNewLotteryInfo:(id)a0;
- (void).cxx_destruct;

@end
