@class NSString;

@interface HTSLiveBattleModeMessage_StealTowerData : IESLivePBBaseMessage

@property (nonatomic) long long startTime;
@property (nonatomic) long long finishTime;
@property (nonatomic) long long duration;
@property (nonatomic) long long targetScore;
@property (copy, nonatomic) NSString *attackerId;
@property (nonatomic) BOOL finish;
@property (nonatomic) long long win;
@property (nonatomic) long long openScore;
@property (nonatomic) long long count;

+ (id)descriptor;

@end
