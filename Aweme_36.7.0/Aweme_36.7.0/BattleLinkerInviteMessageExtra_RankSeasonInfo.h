@class NSString, HTSLiveImage;

@interface BattleLinkerInviteMessageExtra_RankSeasonInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rankDetail;
@property (retain, nonatomic) HTSLiveImage *rankBadge;
@property (nonatomic) BOOL hasRankBadge;
@property (retain, nonatomic) HTSLiveImage *avatarFrame;
@property (nonatomic) BOOL hasAvatarFrame;

+ (id)descriptor;

@end
