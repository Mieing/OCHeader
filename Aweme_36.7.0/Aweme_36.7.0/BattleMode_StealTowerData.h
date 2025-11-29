@class NSString;

@interface BattleMode_StealTowerData : IESLivePBBaseMessage

@property (nonatomic) long long triggerTime;
@property (nonatomic) long long duration;
@property (nonatomic) long long targetScore;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSString *attackerId;
@property (nonatomic) long long finishTime;
@property (nonatomic) long long win;
@property (nonatomic) long long count;
@property (nonatomic) long long openScore;
@property (nonatomic) BOOL finish;

+ (id)descriptor;

@end
