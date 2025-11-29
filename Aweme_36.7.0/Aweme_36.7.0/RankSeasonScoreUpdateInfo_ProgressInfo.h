@class NSString, NSMutableArray;

@interface RankSeasonScoreUpdateInfo_ProgressInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL showBar;
@property (nonatomic) long long progress;
@property (retain, nonatomic) NSMutableArray *contentArray;
@property (readonly, nonatomic) unsigned long long contentArray_Count;
@property (retain, nonatomic) NSMutableArray *notifyInfosArray;
@property (readonly, nonatomic) unsigned long long notifyInfosArray_Count;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) NSString *taskId;

+ (id)descriptor;

@end
