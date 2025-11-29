@class NSString, MMFinderLivePkTaskedBonusStateOrchestrator, MMFinderLiveConnectMicPkTeamInfo;

@interface MMFinderLiveConnectMicPKInfo : NSObject <NSCopying>

@property (nonatomic) unsigned long long anchorPkState;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int timeLeft;
@property (nonatomic) unsigned int displayedTimeLeft;
@property (nonatomic) unsigned long long sequence;
@property (nonatomic) unsigned int inviteTimeLeft;
@property (nonatomic) unsigned long long battleMode;
@property (nonatomic) unsigned long long battleScope;
@property (retain, nonatomic) MMFinderLiveConnectMicPkTeamInfo *teamInfo;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusStateOrchestrator *taskedBonusStateOrchestrator;
@property (retain, nonatomic) NSString *applicantFinderUsername;
@property (nonatomic) unsigned long long winningCondition;
@property (retain, nonatomic) id winningConditionArguments;
@property (nonatomic) BOOL isDisableNextBattle;
@property (nonatomic) unsigned int battleDuration;
@property (readonly, nonatomic) unsigned long long opponentScenario;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isPkStarted;
- (BOOL)isAnchorPkStarted;
- (BOOL)isAudiencePkStarted;
- (BOOL)isCrossRoomPkStarted;
- (BOOL)isAnchorPkApplying;
- (void).cxx_destruct;

@end
