@class NSString;

@interface IESLiveBattleUserSettings : IESLivePBBaseMessage

@property (nonatomic) BOOL isTurnOn;
@property (nonatomic) BOOL acceptNotFollowerInvite;
@property (nonatomic) BOOL allowGiftToOtherAnchors;
@property (nonatomic) BOOL acceptFriendInvite;
@property (nonatomic) BOOL acceptHourlyRankInvite;
@property (nonatomic) BOOL acceptPopularityRankInvite;
@property (nonatomic) long long inviteRejectPermanentTotal;
@property (nonatomic) long long inviteRejectTemporaryTotal;
@property (copy, nonatomic) NSString *inviteRejectTemporaryText;
@property (nonatomic) BOOL pkAcceptVolumeUp;
@property (nonatomic) BOOL pkAutoConfirm;
@property (nonatomic) BOOL acceptUnionRecommendInvite;
@property (nonatomic) BOOL linkmicAllowGiftToOtherAnchors;
@property (nonatomic) BOOL pkAllowGiftToOtherAnchors;
@property (nonatomic) BOOL autoStartPropCard;
@property (nonatomic) BOOL autoStartStealDragon;
@property (nonatomic) BOOL showSeasonUserRank;

+ (id)descriptor;

@end
