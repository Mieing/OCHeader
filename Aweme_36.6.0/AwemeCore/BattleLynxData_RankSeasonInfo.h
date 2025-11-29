@class NSMutableArray, RankSeasonScoreUpdateInfo;

@interface BattleLynxData_RankSeasonInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *startNotifyContentArray;
@property (readonly, nonatomic) unsigned long long startNotifyContentArray_Count;
@property (retain, nonatomic) RankSeasonScoreUpdateInfo *rankSeasonScoreUpdateInfo;
@property (nonatomic) BOOL hasRankSeasonScoreUpdateInfo;

+ (id)descriptor;

@end
