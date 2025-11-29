@class HTSLiveGuestBattleUserGradeInfo, NSString, HTSLiveLinkmicQuickInteract, HTSLiveGuestBattleContributors, HTSLiveUser, HTSLiveBattleBonusInfo;

@interface HTSLiveBattleResult : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *guestId;
@property (copy, nonatomic) NSString *score;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *scoreFuzzy;
@property (retain, nonatomic) HTSLiveGuestBattleContributors *contributors;
@property (nonatomic) BOOL hasContributors;
@property (retain, nonatomic) HTSLiveLinkmicQuickInteract *quickInteract;
@property (nonatomic) BOOL hasQuickInteract;
@property (retain, nonatomic) HTSLiveGuestBattleUserGradeInfo *crownInfo;
@property (nonatomic) BOOL hasCrownInfo;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) long long scoreNum;
@property (nonatomic) int role;
@property (copy, nonatomic) NSString *guestIdStr;
@property (nonatomic) BOOL forcePlay;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long realScore;
@property (retain, nonatomic) HTSLiveUser *titleSponsor;
@property (nonatomic) BOOL hasTitleSponsor;
@property (nonatomic) BOOL hitToast;
@property (retain, nonatomic) HTSLiveBattleBonusInfo *bonusInfo;
@property (nonatomic) BOOL hasBonusInfo;
@property (copy, nonatomic) NSString *guestOpenIdStr;

+ (id)descriptor;

@end
