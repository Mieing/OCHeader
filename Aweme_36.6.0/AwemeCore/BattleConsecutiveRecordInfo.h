@interface BattleConsecutiveRecordInfo : IESLivePBBaseMessage

@property (nonatomic) int battleResultType;
@property (nonatomic) long long consecutiveCount;

+ (id)descriptor;

@end
