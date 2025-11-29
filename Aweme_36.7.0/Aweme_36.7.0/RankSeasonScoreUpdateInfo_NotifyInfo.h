@class NSMutableArray;

@interface RankSeasonScoreUpdateInfo_NotifyInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isGray;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSMutableArray *contentArray;
@property (readonly, nonatomic) unsigned long long contentArray_Count;

+ (id)descriptor;

@end
