@class NSArray, NSDictionary, NSString, HTSLiveBattleResult, NSNumber, HTSLiveGuestBattleInfo;

@interface IESLiveGuestBattleModel : NSObject

@property (readonly, nonatomic) HTSLiveGuestBattleInfo *battleInfo;
@property (copy, nonatomic) NSArray *battleDurationSetting;
@property (retain, nonatomic) NSNumber *battleDuration;
@property (retain, nonatomic) NSNumber *guestBattleSwitchStatus;
@property (retain, nonatomic) NSNumber *battleID;
@property (retain, nonatomic) NSNumber *lastBattleID;
@property (nonatomic) long long battleType;
@property (nonatomic) double battleStartTime;
@property (nonatomic) long long currentServerTime;
@property (nonatomic) float battleRemainSeconds;
@property (nonatomic) long long settleRemainSeconds;
@property (copy, nonatomic) NSDictionary *battlers;
@property (retain, nonatomic) HTSLiveBattleResult *winner;
@property (copy, nonatomic) NSArray *losers;
@property (nonatomic) int loserNum;
@property (nonatomic) int realLoserNum;
@property (nonatomic) int scoreType;
@property (nonatomic) int lastScoreType;
@property (nonatomic) BOOL isAnchorInvolved;
@property (nonatomic) int uiType;
@property (nonatomic) long long battleSubStage;
@property (nonatomic) long long finishReason;
@property (nonatomic) int recommendScoreType;
@property (copy, nonatomic) NSString *dressID;
@property (copy, nonatomic) NSString *requestPage;

- (id)initWithDIContext:(id)a0;
- (id)guestBattleTypeForTrack;
- (void)updateBattlersBattleInfo:(id)a0;
- (void)createOrUpdateBattlers:(id)a0;
- (BOOL)shouldUpdateScoreBattleInfo:(id)a0;
- (void)resolveBattleInfo:(id)a0;
- (void)updateBattlersRoleInBattleWithServerRole;
- (void)updateBattlersRoleInBattle;
- (void)setupFinalBattlersRoleInSettle;
- (void)resetOnNewBattleStart;
- (void).cxx_destruct;

@end
