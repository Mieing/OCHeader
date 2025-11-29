@class NSMutableArray;

@interface RankSeasonScoreUpdateInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *progressInfosArray;
@property (readonly, nonatomic) unsigned long long progressInfosArray_Count;

+ (id)descriptor;

@end
