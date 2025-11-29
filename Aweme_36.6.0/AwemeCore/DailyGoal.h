@interface DailyGoal : IESLivePBBaseMessage

@property (nonatomic) long long scoreLeftToFinish;
@property (nonatomic) long long todayTargetRank;
@property (nonatomic) long long currentRank;
@property (nonatomic) BOOL targetFinished;
@property (nonatomic) long long targetFinishRank;

+ (id)descriptor;

@end
