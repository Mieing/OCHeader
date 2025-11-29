@interface StealDragonInfo_PeriodConfig : IESLivePBBaseMessage

@property (nonatomic) int stage;
@property (nonatomic) long long startTimeSec;
@property (nonatomic) long long durationSec;

+ (id)descriptor;

@end
