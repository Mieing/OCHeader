@class NSString, HTSLiveImage;

@interface BattleRival_RankSeasonInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rankDetail;
@property (retain, nonatomic) HTSLiveImage *rankBadge;
@property (nonatomic) BOOL hasRankBadge;

+ (id)descriptor;

@end
