@class NSMutableArray, RankSeasonScoreUpdateInfo;

@interface BattleStatsMetaLynxData : IESLivePBBaseMessage

@property (retain, nonatomic) RankSeasonScoreUpdateInfo *rankSeasonScoreUpdateInfo;
@property (nonatomic) BOOL hasRankSeasonScoreUpdateInfo;
@property (retain, nonatomic) NSMutableArray *startNotifyContentArray;
@property (readonly, nonatomic) unsigned long long startNotifyContentArray_Count;

+ (id)descriptor;

@end
